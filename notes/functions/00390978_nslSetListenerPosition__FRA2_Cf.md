# nslSetListenerPosition__FRA2_Cf

- Address: `0x00390978`
- Size: `0x70` (112 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.2143 | 92.8571 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released NSL initialization check, listener matrix offsets, fatal path, and vector layout. Correcting the exact global layout and string address matched on attempt 2.

## Outcome

Matched NSL listener position
