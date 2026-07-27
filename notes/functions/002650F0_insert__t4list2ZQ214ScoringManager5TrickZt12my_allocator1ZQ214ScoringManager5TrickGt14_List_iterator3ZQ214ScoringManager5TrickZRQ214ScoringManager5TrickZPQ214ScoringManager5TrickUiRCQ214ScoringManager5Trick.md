# insert__t4list2ZQ214ScoringManager5TrickZt12my_allocator1ZQ214ScoringManager5TrickGt14_List_iterator3ZQ214ScoringManager5TrickZRQ214ScoringManager5TrickZPQ214ScoringManager5TrickUiRCQ214ScoringManager5Trick

- Address: `0x002650F0`
- Size: `0xF8` (248 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.6774 | 1.6129 | `candidate.cpp` |

### Attempt 1 notes

Exact released SGI `list::insert(position, count, value)` body with the authentic 32-byte `ScoringManager::Trick`, 40-byte node, allocator pool, construction, and linking helpers. The operations reproduce, but EE GCC kept the position iterator in registers instead of the target's stack-temporary form, emitting an 80-byte frame and 220-byte function rather than 112/248.

## Outcome

Exact released trick-list insert differed in iterator temporary allocation.
