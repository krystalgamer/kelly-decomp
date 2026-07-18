# going_out_of_service__9ai_action

- Address: `0x00105E40`
- Size: `0x14` (20 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_actions.cpp`
- Reference source: `KS/SRC/ai_actions.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.8333 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

With assertions removed, the released method clears the `IN_SERVICE` bit in signed flags at offset `0x4`. Using the signed `-2` mask reproduced the target immediate on attempt two.

## Outcome

The released `ai_action::going_out_of_service` flag clear matched on attempt two with the signed mask.
