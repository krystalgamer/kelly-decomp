# stop__8MusicMan

- Address: `0x002595F0`
- Size: `0x38` (56 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released manager uses the shared music layout and stops its embedded
listing only when it is playing. A local stop-function pointer preserves the
non-tail call.

## Outcome

The local manager layout and compiler barrier were removed.
