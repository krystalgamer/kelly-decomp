# remove_from_local_region__9vm_thread

- Address: `0x00356200`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.1818 | 9.0909 | `candidate.cpp` |
| 2 | different | 93.1818 | 81.8182 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `size44-vm-widget-core.cpp` |

### Attempt 3 notes

The shared VM-thread and region declarations, explicit null return, and local
function pointer preserve the normal remove-thread call.

## Outcome

The compiler barrier and local region declaration were removed.
