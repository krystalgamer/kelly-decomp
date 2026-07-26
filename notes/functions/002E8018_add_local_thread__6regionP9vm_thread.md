# add_local_thread__6regionP9vm_thread

- Address: `0x002E8018`
- Size: `0xD0` (208 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.75 | 0.0 | `candidate.cpp` |
| 2 | different | 18.75 | 0.0 | `candidate.cpp` |
| 3 | different | 18.75 | 0.0 | `candidate.cpp` |
| 4 | different | 18.75 | 0.0 | `candidate.cpp` |
| 5 | different | 18.75 | 0.0 | `candidate.cpp` |

## Outcome

The released local-thread insertion behavior was recovered, but old-STL allocator and iterator temporary scheduling remained irreducible after five source-level attempts.
