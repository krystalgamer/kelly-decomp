# insert__t4list2ZQ27ai_path8waypointZt12my_allocator1ZQ27ai_path8waypointGt14_List_iterator3ZQ27ai_path8waypointZRQ27ai_path8waypointZPQ27ai_path8waypointUiRCQ27ai_path8waypoint

- Address: `0x00110250`
- Size: `0xD8` (216 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.8704 | 1.8519 | `candidate.cpp` |
| 2 | different | 28.7037 | 0.0 | `candidate.cpp` |
| 3 | different | 31.4815 | 3.7037 | `candidate.cpp` |
| 4 | different | 29.6296 | 1.8519 | `candidate.cpp` |
| 5 | different | 31.0185 | 3.7037 | `candidate.cpp` |

### Attempt 1 notes

The released list insertion model used by-value iterator/value copies that produced a smaller frame and block-copied the waypoint.

## Outcome

Recovered the 24-byte list node, 16-byte waypoint, custom allocator, copy construction, and linkage flow. Five candidates could not reproduce the standard-list iterator temporaries and register schedule; best byte score was 32.8704%.
