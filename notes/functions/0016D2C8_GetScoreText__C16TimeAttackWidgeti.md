# GetScoreText__C16TimeAttackWidgeti

- Address: `0x0016D2C8`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_timeattack.cpp`
- Reference source: `KS/SRC/ks/igo_widget_timeattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 2 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 3 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 4 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 5 | different | 91.6667 | 88.8889 | `candidate.cpp` |

### Attempt 1 notes

Created the shared source-faithful TimeAttackWidget header, reused the shared IGOWidget and stringx declarations, consolidated two existing selector declarations, rebuilt existing selectors, and used the exact released body.

### Attempt 2 notes

Tested an explicit returned stringx copy.

### Attempt 3 notes

Used direct-constructor spelling for the released local.

### Attempt 4 notes

Tested a narrow pre-return optimization barrier.

### Attempt 5 notes

Returned through a const source reference to constrain the copy operand.

## Outcome

All five shared-context source forms reproduced 66 of 72 bytes but retained the same copy-constructor argument scheduling difference; deferred.
