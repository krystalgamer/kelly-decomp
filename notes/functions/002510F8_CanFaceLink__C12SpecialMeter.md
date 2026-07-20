# CanFaceLink__C12SpecialMeter

- Address: `0x002510F8`
- Size: `0x30` (48 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate compares the timer at 0x20 against 0.01f. The explicit matching-only `nop` preserves the target EE hazard slot between constant `mtc1` and `c.lt.s`.

## Outcome

The released `SpecialMeter::CanFaceLink` predicate matched exactly on the first attempt.
