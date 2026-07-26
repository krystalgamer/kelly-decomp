# thunder__9SFXEngine

- Address: `0x0025CCD0`
- Size: `0xC0` (192 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/SFXEngine.cpp`
- Reference source: `KS/SRC/ks/SFXEngine.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.8333 | 95.8333 | `candidate.cpp` |
| 2 | different | 56.25 | 45.8333 | `candidate.cpp` |
| 3 | different | 95.8333 | 95.8333 | `candidate.cpp` |
| 4 | different | 89.5833 | 87.5 | `candidate.cpp` |
| 5 | different | 74.4792 | 58.3333 | `candidate.cpp` |

### Attempt 1 notes

The exact released beach-name comparison matched 46 of 48 instructions; only
the global-game load and saved-`this` move were reversed.

### Attempt 5 notes

Register binding, a function barrier, a named returned string, and a local
literal pointer could not swap only those two instructions.

## Outcome

The thunder trigger matched 46 of 48 instructions, but five source forms could not swap only the global-game load and saved-this move.
