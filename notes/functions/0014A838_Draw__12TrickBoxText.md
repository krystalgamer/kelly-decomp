# Draw__12TrickBoxText

- Address: `0x0014A838`
- Size: `0x16C` (364 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.1429 | 12.0879 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 52 lane B5 for `0x0014A838 Draw__12TrickBoxText`.
- Tested the exact released `TrickBoxText::Draw()` body once with minimal self-contained declarations preserving the required `TextString`, `RandomText`, `StringList`, `color32`, and `TrickBoxText` member layout and the two `Render` overloads.
- Result: **different**, byte score **32.1429%** (117/364) and instruction score **12.0879%** (11/91); candidate size 356 bytes versus target size 364 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.cpp:853-875`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:12-45,48-70,120-122,167-190,259-291`
- `kelly-slaters-pro-surfer/KS/SRC/color.h:45-61`
- `tmp/functions/0014A838_Draw__12TrickBoxText/attempt-1/result.json`

## Outcome

The exact released TrickBoxText draw definition differed from the target; the sole attempt scored 32.1429%.
