# SetPos__10FloatingPQffff

- Address: `0x0014F630`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.1053 | 31.5789 | `candidate.cpp` |
| 2 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 3 | different | 59.2105 | 52.6316 | `candidate.cpp` |
| 4 | different | 5.2632 | 0.0 | `candidate.cpp` |
| 5 | different | 89.4737 | 89.4737 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and shared PanelQuad/FloatingPQ layout emitted a 56-byte sibling call to PanelQuad::SetPos.

### Attempt 2 notes

A normalized final barrier prevented the sibling call and reproduced 17 of 19 instructions; only the return-address save and this-register copy were scheduled in the opposite order.

### Attempt 3 notes

An additional entry barrier disrupted the otherwise matching floating-point and store schedule and moved farther from target.

### Attempt 4 notes

A barrier between width and height assignment overconstrained scheduling and compacted the output incorrectly.

### Attempt 5 notes

Naming the computed dimensions restored the 17-of-19 result but retained the same two-instruction prologue scheduling mismatch.

## Outcome

Deferred after five source-faithful forms; final-call behavior and layout match, but two prologue instructions remain reversed.
