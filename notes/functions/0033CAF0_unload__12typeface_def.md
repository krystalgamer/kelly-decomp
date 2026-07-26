# unload__12typeface_def

- Address: `0x0033CAF0`
- Size: `0xD4` (212 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.3774 | 40.8163 | `candidate.cpp` |
| 2 | different | 65.0943 | 73.4694 | `candidate.cpp` |
| 3 | different | 69.8113 | 79.5918 | `candidate.cpp` |
| 4 | different | 67.1296 | 52.9412 | `candidate.cpp` |
| 5 | different | 69.8113 | 79.5918 | `candidate.cpp` |

### Attempt 1 notes

Recovered the exact object offsets, material deletion, 12-byte kern element, and generic resize structure. The erase calculation was over-optimized.

### Attempt 2 notes

Preserving the erased byte count recovered target size minus one instruction and improved the score to 65.0943%.

### Attempt 3 notes

Pinned the old finish and erased-byte values, recovering the target quotient and branch setup. Best byte score was 69.8113%.

### Attempt 4 notes

Moving the erased byte count to the target quotient register expanded the function and disturbed insert scheduling.

### Attempt 5 notes

Rechecked the best preserved-byte shape; the same 69.8113% erase-loop mismatch remained.

## Outcome

Recovered the released reference-counted unload flow, material cleanup, typeface offsets, and generic 12-byte kern-vector resize structure. Five candidates could not reproduce its erase-loop schedule; best byte score was 69.8113%.
