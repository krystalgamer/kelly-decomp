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

The released function stops the current VO only when NSL reports a valid status. The empty matching barrier prevents the conditional `nslStopSound` call from becoming a sibling tail call and emits no target instruction.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The voice-over stop helper matches with its released NSL status guard and conditional stop call.
