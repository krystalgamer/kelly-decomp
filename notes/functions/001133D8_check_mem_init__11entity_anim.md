# check_mem_init__11entity_anim

- Address: `0x001133D8`
- Size: `0xB4` (180 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 99.4444 | 97.7778 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released static-allocation expansion compiled with the faithful 56-byte shared entity_anim declaration; only the signed high half of the released `__PRETTY_FUNCTION__` address differed.

### Attempt 2 notes

The released body matched after compensating for the EE assembler's absolute `.equ` high-half handling while retaining the original allocation, zeroing, and initialization-callback flow.

## Outcome

Matched entity animation static-memory initialization using shared released class and allocator declarations.
