# ClearAccomplishments__11player_info

- Address: `0x00259810`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/player.cpp`
- Reference source: `KS/SRC/ks/player.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.8182 | 44.4444 | `candidate.cpp` |
| 2 | different | 56.8182 | 25.0 | `candidate.cpp` |
| 3 | different | 75.0 | 33.3333 | `candidate.cpp` |

### Attempt 1 notes

Native C++ source-only retry; no extern-C wrapper, compiler barrier, or instruction assembly.

### Attempt 2 notes

Native C++ source-only retry; no extern-C wrapper, compiler barrier, or instruction assembly.

### Attempt 3 notes

Native C++ source-only retry; no extern-C wrapper, compiler barrier, or instruction assembly.

## Outcome

The exact released clear loop and two native C++ equivalents do not reproduce the shipped branch-delay scheduling. The previous matching barriers were invalid, so this row is deferred.
