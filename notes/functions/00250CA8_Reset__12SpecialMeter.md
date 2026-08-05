# Reset__12SpecialMeter

- Address: `0x00250CA8`
- Size: `0x24` (36 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.8889 | 55.5556 | `candidate.cpp` |
| 2 | different | 77.7778 | 11.1111 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `size36-special-reset.cpp` |

### Attempt 1 notes

The first candidate exposed an address-register, inner-symbol, or independent-store scheduling mismatch.

### Attempt 2 notes

Reordering the source stores still let GCC hoist `trickRegion` to the first instruction and rotate the final stores.

### Attempt 3 notes

The canonical `SpecialMeter` declaration and exact released assignment order naturally emit the target zero-store schedule.

## Outcome

The released `SpecialMeter::Reset` implementation matched exactly.
