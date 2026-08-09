# CanFaceLink__C12SpecialMeter

- Address: `0x002510F8`
- Size: `0x30` (48 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 43.75 | 33.3333 | `candidate.cpp` |
| 2 | different | 43.75 | 33.3333 | `candidate.cpp` |
| 3 | different | 43.75 | 33.3333 | `candidate.cpp` |

### Attempt 1 notes

The source-faithful comparison emits 44 bytes and omits the target EE hazard
slot between `mtc1` and `c.lt.s`.

## Outcome

The prior exact form added a non-released nop. It was removed and the
predicate was deferred after three native forms.
