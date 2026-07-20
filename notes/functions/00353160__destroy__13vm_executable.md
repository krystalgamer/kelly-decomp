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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places the executable buffer at 0x2c and conditionally deletes it.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `vm_executable::_destroy` implementation matched exactly.
