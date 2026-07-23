# EndRun__15PauseMenuSystem

- Address: `0x001B4A00`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 66.6667 | `candidate.cpp` |
| 2 | different | 95.2381 | 90.4762 | `candidate.cpp` |
| 3 | different | 80.9524 | 76.1905 | `candidate.cpp` |
| 4 | different | 95.2381 | 90.4762 | `candidate.cpp` |
| 5 | different | 44.0476 | 19.0476 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released EndRun calls with reconstructed PauseMenuSystem virtual endDraw, manager, and IGOFrontEnd declarations. The compiler tail-called the final IGO EndRun and produced 80 bytes.

### Attempt 2 notes

Added the matching-only exit barrier to retain the released final call and epilogue. This reached 95.24%; only the independent ra and s0 stack saves were reversed.

### Attempt 3 notes

Added a matching barrier before the released calls as well. It changed broader scheduling and regressed to 80.95%.

### Attempt 4 notes

Expressed the exact calls through a raw target alias and source-faithful layout structs. The same two-instruction stack-save order remained at 95.24%.

### Attempt 5 notes

Cached the manager pointer before the virtual call. This changed register allocation and shortened the function to 76 bytes.

## Outcome

Released PauseMenuSystem::EndRun remained blocked by a two-instruction prologue save order after five source-level attempts.
