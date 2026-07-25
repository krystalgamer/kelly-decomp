# check_mem_init__Q26entity13movement_info

- Address: `0x001276D0`
- Size: `0xB4` (180 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released static-allocation expansion matched on the first attempt after adding the faithful aligned matrix4x4 and po declarations once in shared context and defining entity::movement_info in the existing shared entity declaration.

## Outcome

Matched movement-info static-memory initialization using shared released po and entity declarations.
