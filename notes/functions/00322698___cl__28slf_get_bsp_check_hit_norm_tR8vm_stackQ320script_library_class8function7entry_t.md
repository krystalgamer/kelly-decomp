# __cl__28slf_get_bsp_check_hit_norm_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00322698`
- Size: `0x164` (356 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 30.2778 | 11.1111 | `candidate.cpp` |
| 3 | different | 30.2778 | 11.1111 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released BSP-hit-normal body through an asm-labeled wrapper but emitted no target symbol.

### Attempt 2 notes

Attempt 2 used the exact released member body and differed at 30.2778%.

### Attempt 3 notes

Attempt 3 preserved the exact released body as an out-of-line member definition and also differed at 30.2778%. No further attempt was made.

## Outcome

Three exact-body declaration-context attempts were preserved; the best target-symbol candidate differed at 30.2778%.
