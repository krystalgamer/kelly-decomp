# _$_9vm_thread

- Address: `0x003545A8`
- Size: `0xB0` (176 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.4468 | 21.2766 | `candidate.cpp` |
| 2 | different | 32.4468 | 21.2766 | `candidate.cpp` |
| 3 | different | 32.4468 | 21.2766 | `candidate.cpp` |
| 4 | different | 38.7755 | 16.3265 | `candidate.cpp` |
| 5 | different | 30.2083 | 18.75 | `candidate.cpp` |

## Outcome

Five released VM-thread destructor variants could not reproduce the compiler-generated vector allocator deallocation and base teardown schedule.
