# frame_advance_debug_text__Ff

- Address: `0x002C9D50`
- Size: `0x60` (96 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/debug_render.cpp`
- Reference source: `KS/SRC/debug_render.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.0 | 33.3333 | `candidate.cpp` |
| 2 | different | 49.0 | 32.0 | `candidate.cpp` |
| 3 | different | 53.125 | 33.3333 | `candidate.cpp` |
| 4 | different | 50.0 | 33.3333 | `candidate.cpp` |
| 5 | different | 50.0 | 33.3333 | `candidate.cpp` |

## Outcome

Released debug-text advancement retained duration reload and FPU latency nop differences after five volatile/barrier candidates.
