# __cl__27slf_get_bsp_check_hit_pos_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003224C0`
- Size: `0x164` (356 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 3.2609 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Used the exact released operator body with minimal standalone declarations for `vector3d`, `vm_stack`, VM ownership accessors, and `stringx` concatenation.

Result: different; 92/368 compared bytes, 3/92 instructions; score 25.0000; instruction score 3.2609. Candidate size 368 bytes versus target 356 bytes.

## Outcome

The exact released BSP-hit-position script getter differed from the target; the sole attempt scored 25%.
