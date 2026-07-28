# add_particle_generator__21world_dynamics_systemRC7stringxRC9entity_idUi

- Address: `0x002A7048`
- Size: `0x19C` (412 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.7767 | 0.9709 | `candidate.cpp` |

### Attempt 1 notes

# First-pass source-first attempt — 0x002A7048

- Used the exact released `world_dynamics_system::add_particle_generator` body from `wds.cpp`.
- Added only minimal declarations needed to compile the released body.
- Ran one non-placeholder `function_test` attempt with `env/bin/python`.
- Result: `different`, score 15.7767% (65/412 bytes), instruction score 0.9709% (1/103); candidate 360 bytes versus target 412 bytes.
- No variants, diff chasing, build, finalize, integration, commit, push, tool edits, or subagents.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/wds.cpp:7687-7705` — exact released function body.
- `kelly-slaters-pro-surfer/KS/SRC/filespec.h:8-21` — released `filespec` layout and assignment.
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-287,309-310` — released `stringx` layout and special members.
- `kelly-slaters-pro-surfer/KS/SRC/particle.h:89-92` — released particle-generator constructor.
- `kelly-slaters-pro-surfer/KS/SRC/entflavor.h:11-34` — released entity-flavor value.
- `kelly-slaters-pro-surfer/KS/SRC/entity.h:113-145` — released nonstatic entity flag.
- `tmp/functions/002A7048_add_particle_generator__21world_dynamics_systemRC7stringxRC9entity_idUi/attempt-1/result.json` — sole test result.

## Outcome

The exact released particle-generator addition differed at 15.7767% byte score; no source variant was attempted.
