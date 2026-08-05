# _destroy__13vm_executable

- Address: `0x00353160`
- Size: `0x28` (40 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_executable.cpp`
- Reference source: `KS/SRC/vm_executable.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size40-vm-destroy.cpp` |

### Attempt 1 notes

The shared executable layout and an ordinary local delete-function pointer
retain the released conditional call frame.

## Outcome

The released destroy helper matches without a compiler barrier.
