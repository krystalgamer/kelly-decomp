# OnEndRun__13PhotoFrontEnd

- Address: `0x001CE1D0`
- Size: `0x68` (104 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.9615 | 15.3846 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read both menu offsets, entries/vtable layouts, null checks, and setHigh calls. Inlining both released calls matched on attempt 2.

## Outcome

Matched photo frontend end-run reset
