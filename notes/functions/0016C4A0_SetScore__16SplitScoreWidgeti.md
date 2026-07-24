# SetScore__16SplitScoreWidgeti

- Address: `0x0016C4A0`
- Size: `0x68` (104 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitscore.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitscore.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.1538 | 92.3077 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact two-string temporary ABI, integer string constructor, TextString virtual change call, and source destruction. Prioritizing RA save matched on attempt 2.

## Outcome

Matched split score update
