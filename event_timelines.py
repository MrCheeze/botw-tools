import evfl
from evfl.enums import TriggerType
from pathlib import Path
import yaml

def print_container(container, width=100):
    return yaml.dump(container.data, Dumper=yaml.CDumper, allow_unicode=True, width=width).strip()

def print_timeline(timeline):
    s = f'-------- Event timeline: {timeline.name} --------\n'

    s += f'actors: {len(timeline.actors)}\n'
    s += f'clips: {len(timeline.clips)}\n'
    s += f'oneshots: {len(timeline.oneshots)}\n'
    s += f'cuts: {len(timeline.cuts)}\n'
    s += f'duration: {timeline.duration}\n'
    if timeline.subtimelines:
        s += f'subtimelines: {[sub.name for sub in timeline.subtimelines]}\n'
    s += f'params: {print_container(timeline.params) if timeline.params else "(none)"}'
    s += '\n\n'

    s += '===== Cuts =====\n'
    for cut in timeline.cuts:
        s += '\n'
        s += print_cut(cut)
    s += '\n\n'

    s += '===== Actors =====\n'
    for actor in timeline.actors:
        s += '\n'
        s += print_actor(actor)
    s += '\n\n'

    s += '===== Timeline =====\n'
    for trigger in timeline.triggers:
        s += '\n'
        s += print_trigger(trigger)

    return s

def print_cut(cut):
    s = ''
    s += f'Cut: {cut.name}\n'
    s += f'start time: {cut.start_time}\n'
    s += f'x4: {cut.x4}\n'
    s += f'params: {print_container(cut.params) if cut.params else "(none)"}\n'
    return s

def print_actor(actor):
    printed_actor = ''
    printed_actor += "Actor: " + str(actor.identifier) + '\n'
    printed_actor += f"x36: {actor.x36}\n"
    printed_actor += "actions: " + str([str(x) for x in actor.actions]) + '\n'
    printed_actor += "params: " + (print_container(actor.params) if actor.params else None) + '\n'
    return printed_actor

def indent_string(s, indent):
    output_lines = []
    whitespace = ' ' * indent
    for line in s.split('\n'):
        output_lines.append(whitespace + line)
    return '\n'.join(output_lines)

def print_trigger(trigger):
    s = ''
    clip = trigger.clip.v
    time = 0.0
    trigger_type_str = '?'
    if trigger.type == TriggerType.kClipEnter:
        time = clip.start_time
        trigger_type_str = 'E'
    elif trigger.type == TriggerType.kClipLeave:
        time = clip.start_time + clip.duration
        trigger_type_str = 'L'

    s += f'[{time:>9}] {trigger_type_str} {clip.actor.v.identifier} - {clip.actor_action.v} (#{trigger.clip._idx}, xc={clip.xc})'
    if trigger.type == TriggerType.kClipEnter:
        s += f'\n{indent_string(f"duration: {clip.duration}", indent=15)}'
        if clip.params:
            s += f'\n{indent_string(print_container(clip.params, width=90), indent=15)}'
    return s

def main() -> None:
    repo_root = Path(__file__).resolve().parent
    bfevtm_dir = repo_root / 'bfevtm'
    event_timelines_dir = repo_root / 'event_timelines'

    for bfevtm_path in bfevtm_dir.glob('*.bfevtm'):
        event_flow = evfl.EventFlow()
        with bfevtm_path.open('rb') as f:
            event_flow.read(f.read())
        s = print_timeline(event_flow.timeline)

        dest_path = event_timelines_dir / (bfevtm_path.stem + '.c')
        with dest_path.open('w', encoding='utf-8') as f:
            f.write(s)
            f.write('\n')

if __name__ == '__main__':
    main()
