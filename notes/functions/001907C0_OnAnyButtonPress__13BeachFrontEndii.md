# OnAnyButtonPress__13BeachFrontEndii

- Address: `0x001907C0`
- Size: `0x8C` (140 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BeachFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.5714 | 82.8571 | `candidate.cpp` |
| 2 | different | 89.2857 | 82.8571 | `candidate.cpp` |
| 3 | different | 89.2857 | 82.8571 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released beach-input guard matched after materializing the camera-state XOR and retaining the entity-manager pointer with an empty compiler barrier.

## Outcome

The released beach input handler matched exactly on the fourth attempt.
