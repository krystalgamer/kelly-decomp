# nslShutdown__Fv

- Address: `0x0038FFE8`
- Size: `0x80` (128 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.7812 | 9.375 | `candidate.cpp` |
| 2 | different | 21.0938 | 3.125 | `candidate.cpp` |
| 3 | different | 96.0938 | 90.625 | `candidate.cpp` |
| 4 | different | 96.875 | 93.75 | `candidate.cpp` |
| 5 | different | 96.875 | 93.75 | `candidate.cpp` |

## Outcome

Deferred the released NSL shutdown after five source-level attempts; the closest candidate matched 124 of 128 bytes, but the two callee-save prologue stores remained reversed.
