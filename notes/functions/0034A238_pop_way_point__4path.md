# pop_way_point__4path

- Address: `0x0034A238`
- Size: `0x10` (16 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method increments `waypoint` at offset `0x18`.

## Outcome

The released `path::pop_way_point` increment matched exactly on the first attempt.
