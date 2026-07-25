# __6signalPCcP9signaller

- Address: `0x0034BFB0`
- Size: `0x94` (148 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reused the matched shared signal callback-list constructor and exact named-signal initializer. The name and owner arguments occupy the released fields while the frame reservation preserves the original prologue.

## Outcome

Matched named signal constructor
