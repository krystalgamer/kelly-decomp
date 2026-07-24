# OnLeft__15PhotoSelectMenui

- Address: `0x001CF0D8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.4194 | 74.1935 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 77.4194 | 74.1935 | `candidate.cpp` |
| 4 | different | 90.3226 | 87.0968 | `candidate.cpp` |
| 5 | different | 83.0645 | 70.9677 | `candidate.cpp` |

## Outcome

Deferred PhotoSelectMenu::OnLeft after five source-level attempts; the released base-left dispatch, sound sequence, arrow highlight index, and timer reproduced at 90%, but the target callee-save prologue scheduling did not.
