# erase__t4list2ZQ214ScoringManager5TrickZt12my_allocator1ZQ214ScoringManager5TrickGt14_List_iterator3ZQ214ScoringManager5TrickZRQ214ScoringManager5TrickZPQ214ScoringManager5TrickT1

- Address: `0x00265078`
- Size: `0x78` (120 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.0323 | 0.0 | `candidate.cpp` |
| 2 | different | 32.5 | 3.3333 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 52.5 | 16.6667 | `candidate.cpp` |
| 5 | different | 47.5806 | 16.129 | `candidate.cpp` |

## Outcome

Deferred ScoringManager::Trick list range erase after five source-level attempts; the released STL iterator loop, node unlink, allocator free-list update, and aggregate return reproduced, but the target iterator temporary stack schedule did not.
