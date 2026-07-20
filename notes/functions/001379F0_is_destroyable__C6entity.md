# is_destroyable__C6entity

- Address: `0x001379F0`
- Size: `0x30` (48 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.9167 | 91.6667 | `candidate.cpp` |
| 2 | different | 97.9167 | 91.6667 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released predicate checks the destruction-info pointer, signed 16-bit hit-point flag, and positive count. A non-emitting register constraint prevents EE GCC from strength-reducing the signed `lh` to `lhu` before the bit test.

## Outcome

The released `entity::is_destroyable` predicate matched exactly on attempt three.
