# clear__t10_List_base2Z12game_processZt12my_allocator1Z12game_process

- Address: `0x002AF598`
- Size: `0x8C` (140 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.6389 | 5.5556 | `candidate.cpp` |
| 2 | different | 62.8571 | 40.0 | `candidate.cpp` |
| 3 | different | 69.2857 | 51.4286 | `candidate.cpp` |
| 4 | different | 72.1429 | 60.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The generated list clear matched after placing the allocator setup on the nonempty path and using a compiler barrier to keep sentinel reset stores out of the entry branch delay slot.

## Outcome

The game-process list clear matched exactly on the fifth attempt.
