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
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an address-register, inner-symbol, or independent-store scheduling mismatch.

### Attempt 2 notes

Reordering the source stores still let GCC hoist `trickRegion` to the first instruction and rotate the final stores.

### Attempt 3 notes

Minimal padding preserves all eight released meter fields and their reset values.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `SpecialMeter::Reset` implementation matched exactly.
