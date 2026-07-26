# erase__t4list2Z12game_processZt12my_allocator1Z12game_processGt14_List_iterator3Z12game_processZR12game_processZP12game_processT1

- Address: `0x002AF648`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.8958 | 0.0 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 5 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

The released GNU 2 range-erase logic was structurally correct, but emitted a
160-byte frame and different iterator/node registers instead of the target's
144-byte form.

### Attempt 5 notes

Explicit specialization, iterator copies, do-while rotation, and a compiler
barrier did not recover the target ABI schedule.

## Outcome

The GNU 2 game-process range erase retained a 160-byte frame and divergent iterator register allocation across five source forms.
