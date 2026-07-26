# Update__14BurstTrickTextf

- Address: `0x0014C250`
- Size: `0xE0` (224 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.4167 | 13.3333 | `candidate-round1b.cpp` |
| 2 | different | 37.9464 | 25.0 | `candidate-round2.cpp` |
| 3 | different | 24.569 | 13.7931 | `candidate-round3.cpp` |
| 4 | different | 48.6607 | 30.3571 | `candidate-round4.cpp` |
| 5 | different | 41.0714 | 21.4286 | `candidate-round5.cpp` |

### Attempt 1 notes

Reconstructed the large BurstTrickText layout through exact field offsets and lowered the released update body. The first valid body was 240 bytes because pointer and line-index calculations were not folded like the target.

### Attempt 2 notes

Kept persistent pointers for scale, target, rate, source lines, and output lines. This recovered the target 224-byte size but used different arithmetic and loop registers.

### Attempt 3 notes

Used references and the exact origY assignment expression. The function was 232 bytes and retained different address calculations.

### Attempt 4 notes

Reduced temporaries while preserving the released expression and explicit field offsets. This matched the 224-byte size and gave the best score.

### Attempt 5 notes

Hoisted the 0.5 factor and iterated output entries directly. GCC shortened the body to 216 bytes.

## Outcome

Deferred after five source-level attempts. All large-object field offsets, scale clamping, line-height arithmetic, and output stride were reconstructed, but the target pointer/register schedule could not be reproduced.
