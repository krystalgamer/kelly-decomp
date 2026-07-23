# nslSetSystemCallbacks__FP23nslSystemCallbackStruct

- Address: `0x00390C48`
- Size: `0x50` (80 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released nslSystemCallbackStruct declaration and memcpy body. Reconstructed all eight callback slots and the exact global callback table address.

## Outcome

Matched released nslSetSystemCallbacks body
