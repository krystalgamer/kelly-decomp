# inDemoMode__15DemoModeManager

- Address: `0x001FA978`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/DemoMode.cpp`
- Reference source: `KS/SRC/ks/DemoMode.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released status query returns the word-sized `inDemo` flag at offset `0x10`.

## Outcome

The released `DemoModeManager::inDemoMode` field getter matched exactly on the first attempt.
