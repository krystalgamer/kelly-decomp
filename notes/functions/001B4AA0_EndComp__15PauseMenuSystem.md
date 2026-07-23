# EndComp__15PauseMenuSystem

- Address: `0x001B4AA0`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.2381 | 90.4762 | `candidate.cpp` |
| 2 | different | 95.2381 | 90.4762 | `candidate.cpp` |
| 3 | different | 80.9524 | 76.1905 | `candidate.cpp` |
| 4 | different | 44.0476 | 19.0476 | `candidate.cpp` |
| 5 | different | 95.2381 | 90.4762 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released EndComp calls with reconstructed virtual endDraw, manager, and IGOFrontEnd helpers plus an exit barrier. The result reached 95.24%; only the independent ra and s0 stack saves were reversed.

### Attempt 2 notes

Expressed the same released calls through a raw target alias and source-faithful layout structs. The same two-instruction prologue order remained.

### Attempt 3 notes

Added a matching barrier before the released calls. Broader scheduling changed and regressed to 80.95%.

### Attempt 4 notes

Cached the manager pointer before endDraw. Register allocation shortened the body to 76 bytes.

### Attempt 5 notes

Restored the best direct layout form and expressed the default unpause argument as a const value. The 95.24% stack-save order mismatch remained.

## Outcome

Released PauseMenuSystem::EndComp remained blocked by a two-instruction prologue save order after five source-level attempts.
