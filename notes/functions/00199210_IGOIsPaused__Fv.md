# IGOIsPaused__Fv

- Address: `0x00199210`
- Size: `0x10` (16 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released helper loads the global pause-menu pointer and returns its word-sized `draw` flag at offset `0x90`.

## Outcome

The released `IGOIsPaused` nested global load matched exactly on the first attempt.
