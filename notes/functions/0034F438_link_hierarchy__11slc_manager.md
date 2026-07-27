# link_hierarchy__11slc_manager

- Address: `0x0034F438`
- Size: `0x104` (260 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released link_hierarchy definition with the repository integration header. Compilation failed because that selector-guarded header emitted no slc_manager declarations in the isolated candidate.

## Outcome

The exact released script-library hierarchy linker failed the isolated compile; the sole attempt scored 0%.
