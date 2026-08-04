# __nw__17entity_track_treeUi

- Address: `0x00114DD8`
- Size: `0x24` (36 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.7778 | 77.7778 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The direct absolute alias produced the correct address but scheduled its low-half add before the target RA save.

### Attempt 2 notes

The class allocator forwards size, the linker-bound released source-file
literal, and line zero to `arch_malloc`.

## Outcome

The exact allocator matches without pointer synthesis or a compiler barrier.
