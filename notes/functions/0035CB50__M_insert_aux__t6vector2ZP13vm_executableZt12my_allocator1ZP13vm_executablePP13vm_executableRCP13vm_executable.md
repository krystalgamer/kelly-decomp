# _M_insert_aux__t6vector2ZP13vm_executableZt12my_allocator1ZP13vm_executablePP13vm_executableRCP13vm_executable

- Address: `0x0035CB50`
- Size: `0x204` (516 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave 99 lane B2. Source-first candidate instantiates the released project's `my_allocator` with the GCC 2.95 STL `vector` implementation for `vm_executable *`.

## Outcome

The exact released executable-pointer vector insertion candidate failed to compile with its released include closure; no alternate source was attempted.
