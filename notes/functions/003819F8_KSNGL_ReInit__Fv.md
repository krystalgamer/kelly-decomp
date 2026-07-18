# KSNGL_ReInit__Fv

- Address: `0x003819F8`
- Size: `0x8` (8 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksngl.cpp`
- Reference source: `KS/SRC/ks/ksngl.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target build reduces the released interrupt reinitialization helper to an empty function.

## Outcome

The target-empty `KSNGL_ReInit` function matched exactly on the first attempt.
