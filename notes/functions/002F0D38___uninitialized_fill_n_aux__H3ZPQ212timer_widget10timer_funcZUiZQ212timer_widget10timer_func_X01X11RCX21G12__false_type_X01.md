# __uninitialized_fill_n_aux__H3ZPQ212timer_widget10timer_funcZUiZQ212timer_widget10timer_func_X01X11RCX21G12__false_type_X01

- Address: `0x002F0D38`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released fill loop matched exactly with timer_func copy construction, the placement null guard, and canonical string calls.

## Outcome

The released timer function uninitialized fill matched exactly on the first attempt.
