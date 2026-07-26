# insert__t4list2ZP15signal_callbackZt12my_allocator1ZP15signal_callbackGt14_List_iterator3ZP15signal_callbackZRP15signal_callbackZPP15signal_callbackUiRCP15signal_callback

- Address: `0x0035A280`
- Size: `0xC0` (192 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.7755 | 20.4082 | `candidate.cpp` |
| 2 | different | 38.7755 | 20.4082 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 79.6875 | 75.0 | `candidate.cpp` |
| 5 | different | 23.9796 | 6.1224 | `candidate.cpp` |

## Outcome

Five attempts reproduced the GNU count-insert structure closely, but allocator-pool inlining and instruction scheduling did not match.
