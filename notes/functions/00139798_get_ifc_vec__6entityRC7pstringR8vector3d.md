# get_ifc_vec__6entityRC7pstringR8vector3d

- Address: `0x00139798`
- Size: `0xE8` (232 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-2-consolidated.cpp` |

### Attempt 2 notes

Revalidated the exact released vector-interface getter after adding the canonical hard-attrib interface accessor to entity_shared.h.

## Outcome

Matched the exact released vector-interface getter using the consolidated generic-interface virtual surface and canonical entity interface pointer/accessor layout, including hard attributes.
