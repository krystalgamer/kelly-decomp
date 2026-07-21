# Update__10RandomTextf

- Address: `0x00149470`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 55.0 | 40.0 | `candidate.cpp` |
| 2 | different | 56.25 | 45.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released body with an incomplete TextString layout; inherited size and rand_string offsets were wrong and the final update was tail-called.

### Attempt 2 notes

Restored the released isRand offset, but the unavailable StringList empty-class layout still displaced rand_string and retained the tail call.

### Attempt 3 notes

Restored the target member offset and added a narrow barrier after the demonstrated conditional tail call; the released behavior then matched.

## Outcome

The released update behavior matches with the exact member offsets and a narrow barrier preventing the demonstrated conditional tail call.
