# get_signal_name__C4beamUs

- Address: `0x002727B0`
- Size: `0x44` (68 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `beam_dtor_candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `get_signal_name_candidate.cpp` |
| 3 | different | 39.7059 | 23.5294 | `get_signal_name_candidate.cpp` |
| 4 | different | 34.7222 | 22.2222 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first fast-model candidate targeted `beam::~beam` instead of the queued signal-name wrapper. It also included `beam.h`, which is unavailable on the isolated compiler include path, so compilation failed before code generation.

### Attempt 2 notes

The released `beam::get_signal_name` body was identified correctly, but the candidate again included unavailable `beam.h`. The isolated compiler only searches the repository `include/` directory, so this attempt also failed before code generation.

### Attempt 3 notes

Minimal self-contained `entity` and `beam` declarations compiled the released conditional wrapper to the correct 68-byte size. Their placeholder signal counts made `PARENT_SYNC_DUMMY` zero rather than 26, and unresolved base-call/table relocations left the candidate at 39.7059%.

### Attempt 4 notes

Restoring the 27 inherited entity signals and binding the immutable `entity::get_signal_name` and beam `signal_names` addresses recovered every comparison, constant, call, and table address. The compiler laid out the parent-call arm as fallthrough, adding a duplicate epilogue and producing 72 bytes instead of 68.

### Attempt 5 notes

Writing the same conditional wrapper with the local-signal arm first preserved its released semantics while selecting the original branch layout. The candidate matched all 68 bytes and all 17 instructions exactly, including `PARENT_SYNC_DUMMY == 26`, the entity base call, and the beam signal-name table access.

## Outcome

The immutable beam signal-name wrapper was restored with the authentic 27 inherited entity signals, beam ENTER/LEAVE signal ids, entity base-call address, and beam signal-name table address. Reordering the logically equivalent conditional arms selected the released branch layout on attempt 5, matching all 68 bytes and all 17 instructions exactly; the integrated fast build reproduces the reference ROM.
