# __12game_controlRC12game_control

- Address: `0x0035FF40`
- Size: `0xB4` (180 bytes)
- Object: `game/files_vsim`
- Debug source: `inputmgr.h`
- Reference source: `KS/SRC/inputmgr.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.5556 | 26.6667 | `candidate.cpp` |
| 2 | different | 51.6667 | 26.6667 | `candidate.cpp` |
| 3 | different | 54.4444 | 37.7778 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 36.1111 | 20.0 | `candidate.cpp` |

### Attempt 5 notes

Reconstructed the generated implicit copy from the exact `game_control`, `device_axis`, and GNU 2 list declarations. The authentic nontrivial iterator ABI recovered the range-insert call shape, but allocator register selection and iterator stack-slot placement still differed after five source-level candidates, so the shared experiments were reverted.

## Outcome

Deferred the generated game-control copy constructor after five source-level attempts could not reproduce the released list allocator and iterator stack schedule.
