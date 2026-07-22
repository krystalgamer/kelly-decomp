# clear__t10_List_base2ZP13script_objectZt12my_allocator1ZP13script_object

- Address: `0x0035CD58`
- Size: `0x48` (72 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 2 | different | 47.2222 | 5.5556 | `candidate.cpp` |
| 3 | different | 47.2222 | 22.2222 | `candidate.cpp` |
| 4 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 5 | different | 37.5 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released GCC 2 `_List_base::clear` spelling first with the exact originating pointer type and shared allocator declarations. The available compiler chose different loop registers and delay-slot scheduling.

### Attempt 2 notes

Expanded the released allocator return operation directly through the shared free-list slot. Register assignment remained different.

### Attempt 3 notes

Tested the equivalent guarded do-loop form used by the SDK implementation family. It did not reproduce the target branch schedule.

### Attempt 4 notes

Kept the allocator pool pointer loop-local. GCC retained the same nonmatching register allocation.

### Attempt 5 notes

Separated sentinel and free-list temporaries. The target allocator register and delay-slot pattern remained unavailable.

## Outcome

The exact GCC 2 list-clear allocator pattern remains unavailable: all five source-only forms differ in register assignment and delay-slot scheduling.
