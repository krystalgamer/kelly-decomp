# isLevelUnlocked__C16UnlockingManageri

- Address: `0x002F0668`
- Size: `0x58` (88 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/unlock_manager.cpp`
- Reference source: `KS/SRC/ks/unlock_manager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.5652 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released level-unlock predicate, cheat locations, career global, level stride/base/unlocked offset, and IsUnlocked accessor. Anchoring cheat addresses and retaining the accessor offset matched byte-exactly on attempt 2.

## Outcome

Matched released level unlock predicate
