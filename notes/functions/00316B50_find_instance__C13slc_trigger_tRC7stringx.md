# find_instance__C13slc_trigger_tRC7stringx

- Address: `0x00316B50`
- Size: `0x24` (36 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_trigger.cpp`
- Reference source: `KS/SRC/script_lib_trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size36-script-ops.cpp` |

### Attempt 1 notes

The first lookup declared the trigger-manager method const, leaving a relocation against the wrong emitted symbol.

### Attempt 2 notes

The shared script-library and trigger-manager declarations directly return the released instance pointer.

## Outcome

The released `slc_trigger_t::find_instance` wrapper matched exactly.
