# OnModeReset__11IGOFrontEnd

- Address: `0x00175508`
- Size: `0x88` (136 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.2353 | 76.4706 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released IGO mode reset matched after correcting the mode-state/widget offsets and blocking the final camera reset tail call.

## Outcome

The released IGO mode reset matched exactly on the second attempt.
