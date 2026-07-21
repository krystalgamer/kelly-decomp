# StopCurrentVO__18IGOTutorialManager

- Address: `0x0015A2C0`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/tutorialmanager.cpp`
- Reference source: `KS/SRC/ks/tutorialmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released sound-status check and conditional stop matched exactly with current_VO at offset 0x3c. KELLY_DECOMP_COMPILER_BARRIER() prevents a sibling tail call to nslStopSound and emits no target instruction.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released tutorial current-voice stop matched exactly on the first attempt.
