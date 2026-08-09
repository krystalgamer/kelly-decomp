# stopVO__8VOEngine

- Address: `0x00258520`
- Size: `0x38` (56 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/VOEngine.cpp`
- Reference source: `KS/SRC/ks/VOEngine.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.6667 | 46.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released function uses the shared `VOEngine` state and stops the current
sound only when NSL reports a valid status. A local stop-function pointer
preserves the non-tail call.

## Outcome

The local engine layout and compiler barrier were removed.
