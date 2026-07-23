# WAVETEX_CameraUnderwater__Fv

- Address: `0x0037E5C8`
- Size: `0x58` (88 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.5909 | 31.8182 | `candidate.cpp` |
| 2 | different | 52.2727 | 36.3636 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released camera-underwater helper, player getter, game split-screen fields/global, and underwater helper. Reconstructing the inline is_splitscreen accessor matched byte-exactly on attempt 3.

## Outcome

Matched released wave camera underwater check
