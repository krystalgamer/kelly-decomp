# ReleaseIGO__9FEManager

- Address: `0x00199070`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact FEManager fields and both polymorphic delete layouts/slots, including only clearing IGO. It matched on attempt 1.

## Outcome

Matched IGO release cleanup
