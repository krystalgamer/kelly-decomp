# ReadChar__FPUcRi

- Address: `0x001533F8`
- Size: `0x18` (24 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 66.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released helper reads `buffer[index]`, increments the referenced index, and returns the saved byte. Expanding the post-increment expression matched the target scheduling on attempt two.

## Outcome

The released `ReadChar` indexed load and increment matched on attempt two with explicit sequencing.
