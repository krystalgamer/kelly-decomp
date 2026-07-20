# __cl__25slf_set_fog_table_gamma_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00320660`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.3077 | 53.8462 | `candidate.cpp` |
| 2 | different | 51.9231 | 46.1538 | `candidate.cpp` |
| 3 | different | 88.4615 | 84.6154 | `candidate.cpp` |
| 4 | different | 71.1538 | 69.2308 | `candidate.cpp` |
| 5 | different | 51.9231 | 46.1538 | `candidate.cpp` |

### Attempt 1 notes

Used released SLF_PARMS/SLF_DONE structure with inline stack pop and fog-manager singleton access. The compiler assigned the singleton base to v1 and the old stack top to a2, reversing the target register roles and loading the singleton too early.

### Attempt 2 notes

Added a memory barrier after SLF_PARMS to delay singleton access. Register allocation and instruction order changed further, reducing the match to 51.92%.

### Attempt 3 notes

Reserved a2 for the singleton base with a matching LUI while preserving SLF_PARMS. The body then matched except the prologue saved `ra` before the LUI; the target uses stack, LUI, save. Best score: 88.46%.

### Attempt 4 notes

Reworked SLF_PARMS to reserve v1 for the old stack top while using the normal singleton alias. This matched the target prologue/registers but hoisted the singleton pointer load ahead of the stack pop.

### Attempt 5 notes

Combined the fixed-v1 SLF_PARMS form with a post-pop memory barrier. The compiler again changed the instruction schedule substantially and did not preserve the target singleton load position.

## Outcome

Five SLF_PARMS-preserving candidates could not simultaneously reproduce the target singleton/base register allocation, pop ordering, and stack/lui/ra-save prologue.
