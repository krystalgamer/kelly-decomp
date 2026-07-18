# get_radius__C12vr_billboardf

- Address: `0x002C1030`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/billboard.cpp`
- Reference source: `KS/SRC/billboard.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released overestimate returns `width + height` from offsets `0x134` and `0x138`.

## Outcome

The released `vr_billboard::get_radius` sum matched exactly on the first attempt.
