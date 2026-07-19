# ReturnFromDemoToTitle__15DemoModeManager

- Address: `0x001FA980`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/DemoMode.cpp`
- Reference source: `KS/SRC/ks/DemoMode.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Minimal padding preserves the released word-sized boolean fields at offsets 0x34 and 0x88.

## Outcome

The released `DemoModeManager::ReturnFromDemoToTitle` predicate matched exactly on the first attempt.
