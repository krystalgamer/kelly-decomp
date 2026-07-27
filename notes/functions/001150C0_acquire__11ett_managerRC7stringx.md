# acquire__11ett_managerRC7stringx

- Address: `0x001150C0`
- Size: `0xEC` (236 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 22.8814 | 10.1695 | `candidate.cpp` |
| 3 | different | 19.9153 | 0.0 | `candidate.cpp` |
| 4 | different | 19.9153 | 0.0 | `candidate.cpp` |
| 5 | different | 19.9153 | 0.0 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released animation-tree acquisition, filespec normalization, map lookup, resident/in-memory paths, reference increment, returned tree, and cleanups are recovered, but GCC coalesces three saved values into two and shrinks the frame.
