# _M_insert_dispatch__H1Zt14_List_iterator3Z11device_axisZRC11device_axisZPC11device_axis_t4list2Z11device_axisZt12my_allocator1Z11device_axisGt14_List_iterator3Z11device_axisZR11device_axisZP11device_axisX00X00G12__false_type_v

- Address: `0x00358A30`
- Size: `0xE0` (224 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.6667 | 17.5439 | `candidate-round1.cpp` |
| 2 | different | 44.2982 | 19.2982 | `candidate-round2.cpp` |
| 3 | different | 44.2982 | 19.2982 | `candidate-round3.cpp` |
| 4 | different | 65.1786 | 46.4286 | `candidate-round4.cpp` |
| 5 | different | 77.2321 | 75.0 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The released device_axis range-insertion loop and list allocator semantics are correct, but allocator-pool setup and free-list load ordering remain mismatched; forcing the prologue order would require instruction-emitting assembly.
