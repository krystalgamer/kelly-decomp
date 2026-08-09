# Decrease__12SpecialMeterf

- Address: `0x00250FF0`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released positive-value guard uses the shared meter layout. A local
`SetFillage` pointer preserves the normal call.

## Outcome

The compiler barrier and local layout were removed; the released decrease
remains exact.
