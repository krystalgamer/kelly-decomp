# CanRegionLink__C12SpecialMeter

- Address: `0x002510F0`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate returns the word-sized `isEnabled` flag at offset `0xC`.

## Outcome

The released `SpecialMeter::CanRegionLink` getter matched exactly on the first attempt.
