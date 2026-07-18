# frameAdvance__8VOEnginef

- Address: `0x00258448`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/VOEngine.cpp`
- Reference source: `KS/SRC/ks/VOEngine.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released body only guards an otherwise empty function, so optimization reduces it to a no-op.

## Outcome

The optimized empty `VOEngine::frameAdvance` method matched exactly on the first attempt.
