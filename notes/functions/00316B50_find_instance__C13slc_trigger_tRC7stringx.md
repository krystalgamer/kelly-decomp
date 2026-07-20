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
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first lookup declared the trigger-manager method const, leaving a relocation against the wrong emitted symbol.

### Attempt 2 notes

The released script-library lookup delegates to the global trigger manager and returns the pointer value.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `slc_trigger_t::find_instance` wrapper matched exactly.
