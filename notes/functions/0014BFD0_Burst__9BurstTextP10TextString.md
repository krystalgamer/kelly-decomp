# Burst__9BurstTextP10TextString

- Address: `0x0014BFD0`
- Size: `0x1AC` (428 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.0841 | 87.963 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 76 lane A1 — 0x0014BFD0

- Status: **source_pending** (`different`)
- Attempts: **1**
- Byte score: **88.0841%** (377/428)
- Instruction score: **87.9630%** (95/108)
- Candidate: `tmp/functions/0014BFD0_Burst__9BurstTextP10TextString/attempt-1/candidate.cpp`
- SHA-1: `101d7b629bf4f9e8041227df32d4e390136708ce`
- Candidate/target size: 428/428 bytes

Tested the exact released `BurstText::Burst` body with minimal source-faithful declarations. It compiled but differed. No variants, retries, diff chasing, finalization, build, tracked-file edits, or git mutation were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.cpp:1207-1228`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:48-126,293-309`
- `kelly-slaters-pro-surfer/KS/SRC/ks/coords.h:26-37`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-280`
- `kelly-slaters-pro-surfer/KS/SRC/color.h:24-47`
- `tmp/functions/0014BFD0_Burst__9BurstTextP10TextString/attempt-1/result.json`

## Outcome

The exact released burst-text effect differed at 88.0841% byte score; no source variant was attempted.
