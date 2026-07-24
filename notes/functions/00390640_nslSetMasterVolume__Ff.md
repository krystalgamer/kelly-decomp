# nslSetMasterVolume__Ff

- Address: `0x00390640`
- Size: `0x5C` (92 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released initialization guard/fatal check/store and reconstructed the large NSL global layout. It matched on attempt 1.

## Outcome

Matched NSL master volume setter
