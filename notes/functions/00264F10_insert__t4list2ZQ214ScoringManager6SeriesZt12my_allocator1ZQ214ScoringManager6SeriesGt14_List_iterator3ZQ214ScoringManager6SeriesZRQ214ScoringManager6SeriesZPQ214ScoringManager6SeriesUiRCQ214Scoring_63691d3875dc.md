# insert__t4list2ZQ214ScoringManager6SeriesZt12my_allocator1ZQ214ScoringManager6SeriesGt14_List_iterator3ZQ214ScoringManager6SeriesZRQ214ScoringManager6SeriesZPQ214ScoringManager6SeriesUiRCQ214ScoringManager6Series

- Address: `0x00264F10`
- Size: `0xCC` (204 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.3725 | 1.9608 | `candidate.cpp` |
| 2 | different | 34.8039 | 19.6078 | `candidate.cpp` |
| 3 | different | 36.7647 | 19.6078 | `candidate.cpp` |
| 4 | different | 37.7451 | 19.6078 | `candidate.cpp` |
| 5 | different | 37.7451 | 19.6078 | `candidate.cpp` |

## Outcome

The released repeated-list insertion path was recovered, but old-STL allocator and iterator temporary scheduling remained irreducible after five source-level attempts.
