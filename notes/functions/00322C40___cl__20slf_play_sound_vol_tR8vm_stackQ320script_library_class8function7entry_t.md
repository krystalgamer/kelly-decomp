# __cl__20slf_play_sound_vol_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00322C40`
- Size: `0x30` (48 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The shared `SLF_PARMS_UNUSED` body pops the 8-byte parameter block, emits the
unavailable-function warning, and returns completion.

## Outcome

The local stack and function declarations were removed; the released wrapper
remains exact.
