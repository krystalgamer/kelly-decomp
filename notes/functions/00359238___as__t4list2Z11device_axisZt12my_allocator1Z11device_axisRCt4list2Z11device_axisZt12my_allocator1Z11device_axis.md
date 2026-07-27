# __as__t4list2Z11device_axisZt12my_allocator1Z11device_axisRCt4list2Z11device_axisZt12my_allocator1Z11device_axis

- Address: `0x00359238`
- Size: `0xE8` (232 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.4655 | 12.069 | `candidate-1-exact-released.cpp` |
| 2 | different | 31.4655 | 12.069 | `candidate-2-iterator-base-variant.cpp` |
| 3 | different | 25.0 | 6.8966 | `candidate-3-node-pointer-equivalent.cpp` |
| 4 | different | 31.4655 | 12.069 | `candidate-4-list-base-hierarchy.cpp` |
| 5 | different | 29.2373 | 3.3898 | `candidate-5-explicit-iterator-copies.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact GCC list assignment algorithm, device_axis copy, iterator progression, erase/insert calls, return, and frame class are recovered, but the target reloads two stack iterators that isolated GCC retains in registers.
