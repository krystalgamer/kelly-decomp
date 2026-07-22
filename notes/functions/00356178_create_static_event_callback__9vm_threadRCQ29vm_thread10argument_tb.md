# create_static_event_callback__9vm_threadRCQ29vm_thread10argument_tb

- Address: `0x00356178`
- Size: `0x4C` (76 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.5789 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Used immutable vm_thread.cpp:1125-1134 with shared vm_stack, executable, signal, and thread declarations. Attempt 1 tail-called add_callback; attempt 2 used a normalized return barrier and matched byte-for-byte.
