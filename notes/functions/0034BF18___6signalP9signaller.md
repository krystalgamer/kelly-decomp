# __6signalP9signaller

- Address: `0x0034BF18`
- Size: `0x94` (148 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.2432 | 72.973 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Reconstructed the released signal fields, vtable, callback-list sentinel allocation, and owner/flavor initialization. Preserving the constructor frame reservation matched on attempt 2.

## Outcome

Matched signal constructor
