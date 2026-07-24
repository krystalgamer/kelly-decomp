# nslGetMasterVolume__Fv

- Address: `0x003906A0`
- Size: `0x60` (96 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.9583 | 95.8333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact initialization guard, assertion expansion, nslSystem field offsets, fatal literal, and return. Correcting the large-global nominal base matched on attempt 2.

## Outcome

Matched NSL master volume getter
