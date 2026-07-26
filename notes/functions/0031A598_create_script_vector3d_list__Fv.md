# create_script_vector3d_list__Fv

- Address: `0x0031A598`
- Size: `0xC4` (196 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.8571 | 14.2857 | `candidate.cpp` |
| 2 | different | 39.2857 | 14.2857 | `candidate.cpp` |
| 3 | different | 44.3878 | 16.3265 | `candidate.cpp` |
| 4 | different | 44.3878 | 16.3265 | `candidate.cpp` |
| 5 | different | 42.3469 | 12.2449 | `candidate.cpp` |

## Outcome

Five source-level attempts could not reproduce the old STL iterator temporaries and allocator inlining for the vector3d-list factory.
