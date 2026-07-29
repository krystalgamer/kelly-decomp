# _M_insert_aux__t6vector2ZP7nglMeshZt12my_allocator1ZP7nglMeshPP7nglMeshRCP7nglMesh

- Address: `0x002FABE0`
- Size: `0x204` (516 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave98 A5

- Target: `0x002FABE0 vector<nglMesh*>::_M_insert_aux`, GCC 2.95 `stl_vector.h`.
- Confirmed attempts0 (`attempts.json` absent, treated as `[]`) before testing.
- LF-only candidate requested the compiler's exact template body via explicit instantiation.
- Sole test: `compile_failed`, score 0; bundled compiler could not locate `<vector>`.
- No retry, chase, build, finalize, integration, git mutation, or tracked edits.

## Outcome

The exact released NGL mesh-pointer vector insertion candidate failed to compile with its released include closure; no alternate source was attempted.
