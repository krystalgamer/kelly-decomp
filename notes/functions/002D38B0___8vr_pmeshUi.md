# __8vr_pmeshUi

- Address: `0x002D38B0`
- Size: `0x1C0` (448 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.4196 | 1.7857 | `candidate.cpp` |

### Attempt 1 notes

First-pass released-source attempt only. The constructor body is unchanged from `kelly-slaters-pro-surfer/KS/SRC/pmesh.cpp:1924-1951`; minimal self-contained declarations model the member layout and required external symbols. Result: different (19.4196% bytes, 1.7857% instructions). Per wave81 instructions, no retry, alternate logic, or post-test diff investigation was performed.

## Outcome

The exact released pmesh construction body differed at 19.4196% byte score; no source variant was attempted.
