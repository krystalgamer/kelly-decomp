# WAVE_Tick__Fv

- Address: `0x003744A8`
- Size: `0xB4` (180 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.6667 | 84.4444 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The exact released tick body matched with the expanded shared wave debug, timing, break-info, globals, and helper declarations. `KELLY_DECOMP_COMPILER_BARRIER()` emits no target instruction and only prevents an isolated-build sibling call to the final break-info update.

## Outcome

Matched the released wave tick using shared source-faithful wave state and helper declarations.
