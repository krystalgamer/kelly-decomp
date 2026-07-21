# Break__10RandomText

- Address: `0x001495F0`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 62.5 | 44.4444 | `candidate.cpp` |
| 2 | different | 59.7222 | 50.0 | `candidate.cpp` |
| 3 | different | 61.1111 | 55.5556 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released body and inspected RandomText/StringList declarations; the initial single-inheritance reconstruction placed the secondary vptr and fields incorrectly.

### Attempt 2 notes

Restored the secondary polymorphic base layout, identifying the target vptr and isRand offsets.

### Attempt 3 notes

Corrected the old-ABI bool width, StringList offset, and override declaration; one base-adjustment instruction remained.

### Attempt 4 notes

Represented the verified virtual dispatch layout directly in C++ and normalized the demonstrated post-Break barrier that prevents a non-target tail call.

## Outcome

The released RandomText break behavior matches exactly.
