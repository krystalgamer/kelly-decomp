# create_ai_ifc__6entity

- Address: `0x00126ED8`
- Size: `0x48` (72 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 83.3333 | `candidate.cpp` |
| 2 | different | 87.5 | 83.3333 | `candidate.cpp` |
| 3 | different | 87.5 | 83.3333 | `candidate.cpp` |
| 4 | different | 87.5 | 83.3333 | `candidate.cpp` |
| 5 | different | 83.3333 | 83.3333 | `candidate.cpp` |

### Attempt 1 notes

Read the exact ENTITY_INTERFACE_CPP macro and interface declarations; attempt one used its NEW allocation, constructor, assignment, and return semantics.

### Attempt 2 notes

Staged alignment and line arguments without changing behavior; call scheduling was unchanged.

### Attempt 3 notes

Expanded NEW into explicit allocation plus placement construction.

### Attempt 4 notes

Added ABI-guided source register hints for the four allocator arguments; GCC retained the same schedule.

### Attempt 5 notes

Tested a narrow pre-call ordering barrier; it did not produce the target order.

## Outcome

All five source forms differed only in allocator argument scheduling; deferred rather than force instructions.
