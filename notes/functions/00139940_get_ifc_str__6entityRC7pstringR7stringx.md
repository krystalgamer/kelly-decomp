# get_ifc_str__6entityRC7pstringR7stringx

- Address: `0x00139940`
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

### Attempt 1 notes

Compiled the exact released four-interface string-dispatch body with the source interface pointer order, generic-interface virtual order, and retail IFC macro expansion. AI, physical, soft-attribute, and hard-attribute offsets/vtable slots matched all 232 bytes and 58 instructions on the first attempt.

### Attempt 2 notes

Revalidated the exact released string-interface getter against the canonical entity interface layout and shared virtual surface.

## Outcome

Matched the exact released string-interface getter using the consolidated generic-interface virtual surface and canonical entity interface pointer/accessor layout.
