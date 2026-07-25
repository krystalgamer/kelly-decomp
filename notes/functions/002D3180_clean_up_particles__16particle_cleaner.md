# clean_up_particles__16particle_cleaner

- Address: `0x002D3180`
- Size: `0xB4` (180 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particlecleaner.cpp`
- Reference source: `KS/SRC/particlecleaner.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.3696 | 63.0435 | `candidate.cpp` |
| 2 | different | 81.1111 | 68.8889 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 92.2222 | 82.2222 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used shared source-faithful particle_generator inheritance and vector storage; all activity checks matched, while the reduced erase implementation computed its move range differently and omitted one post-memmove nop.

### Attempt 2 notes

Restoring the released SGI copy-and-destroy erase structure matched the range calculation and left only the compiler-generated post-memmove nop absent.

### Attempt 3 notes

The historical EE compiler rejected modern `asm volatile` spelling inside the shared template instantiation.

### Attempt 4 notes

The alternate `__volatile__` spelling was rejected in the same template context.

### Attempt 5 notes

A plain empty compiler boundary restored target size but changed several erase scheduling instructions. No instruction-emitting nop or per-function vector layout was used.

## Outcome

Deferred particle cleanup after five source-level attempts; exact shared inheritance and SGI erase logic could not reproduce the original post-memmove scheduling nop.
