# check_mem_init__16entity_anim_tree

- Address: `0x00113618`
- Size: `0xBC` (188 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released static-allocation expansion matches using the complete
164-byte shared entity_anim_tree declaration.

## Outcome

Released entity animation tree static-memory initialization reproduces the target exactly.
