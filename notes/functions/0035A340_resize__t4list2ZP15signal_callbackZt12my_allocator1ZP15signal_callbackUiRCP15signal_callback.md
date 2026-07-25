# resize__t4list2ZP15signal_callbackZt12my_allocator1ZP15signal_callbackUiRCP15signal_callback

- Address: `0x0035A340`
- Size: `0x98` (152 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 2 | different | 7.3113 | 0.0 | `candidate.cpp` |
| 3 | different | 26.7857 | 7.1429 | `candidate.cpp` |
| 4 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 24.4186 | 4.6512 | `candidate.cpp` |

## Outcome

Five released-template and authentic-iterator variants reproduced list traversal and erase/insert semantics, but GCC2 iterator temporary placement and loop scheduling did not match.
