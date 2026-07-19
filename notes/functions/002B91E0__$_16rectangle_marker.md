# _$_16rectangle_marker

- Address: `0x002B91E0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/marker.h`
- Reference source: `KS/SRC/marker.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reproduces the generated destructor's non-tail call to `entity::~entity`.

## Outcome

`rectangle_marker`'s generated destructor wrapper matched exactly on the first attempt.
