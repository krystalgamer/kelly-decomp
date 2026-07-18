# compute_xz_radius_rel_center__12vr_billboardRC2po

- Address: `0x002C1040`
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

The released `vr_billboard::compute_xz_radius_rel_center` sum matched exactly on the first attempt.
