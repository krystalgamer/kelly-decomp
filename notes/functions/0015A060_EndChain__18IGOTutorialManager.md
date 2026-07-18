# EndChain__18IGOTutorialManager

- Address: `0x0015A060`
- Size: `0xC` (12 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/tutorialmanager.cpp`
- Reference source: `KS/SRC/ks/tutorialmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 33.3333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released member order places `air_trick_in_chain` at `0x34` and `face_trick_in_chain` at `0x38`. Restoring that layout allowed EE GCC to schedule the first source store into the delay slot and match on attempt two.

## Outcome

The released `IGOTutorialManager::EndChain` flag clears matched on attempt two after restoring the header member order.
