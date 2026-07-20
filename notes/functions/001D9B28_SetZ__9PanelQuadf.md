# SetZ__9PanelQuadf

- Address: `0x001D9B28`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 80.0 | 80.0 | `candidate.cpp` |
| 3 | different | 31.8182 | 27.2727 | `candidate.cpp` |
| 4 | different | 15.0 | 10.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter stores Z at 0x17c and forwards the inline quad at offset
0x1c to NGL. The trailing empty compiler barrier prevents EE GCC from replacing
the released call frame with a sibling call.

Re-evaluating the identical first candidate after the exact forwarding-schedule compiler fixup now produces an exact match; this infrastructure recheck does not consume a fifth source attempt.

## Outcome

The released inline PanelQuad::SetZ wrapper matched exactly after correcting the isolated compiler save schedule.
