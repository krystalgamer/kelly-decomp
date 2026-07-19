# IsPhotoShown__C11IGOFrontEnd

- Address: `0x0017CEB0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Minimal layouts place `photoWidget` at 0x5ac and the inlined shown flag at 0x18, preserving the released short-circuit expression.

## Outcome

The released `IGOFrontEnd::IsPhotoShown` short-circuit predicate matched exactly on the first attempt.
