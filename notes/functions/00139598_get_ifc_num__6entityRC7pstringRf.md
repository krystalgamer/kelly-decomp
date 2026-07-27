# get_ifc_num__6entityRC7pstringRf

- Address: `0x00139598`
- Size: `0x114` (276 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `entity::get_ifc_num` body from `kelly-slaters-pro-surfer/KS/SRC/entity.cpp:5750-5762` with released-compatible generic-interface virtual layout and entity interface offsets. It reproduced all 276 target bytes and all 69 instructions.

## Outcome

The exact released entity interface-number dispatcher and declaration context reproduce the target at 100%.
