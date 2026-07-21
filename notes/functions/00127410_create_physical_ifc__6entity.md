# create_physical_ifc__6entity

- Address: `0x00127410`
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
| 5 | different | 69.4444 | 66.6667 | `candidate.cpp` |

### Attempt 1 notes

Read the exact ENTITY_INTERFACE_CPP macro and physical interface declarations; used released NEW, construction, assignment, and return behavior.

### Attempt 2 notes

Staged allocator alignment and line arguments.

### Attempt 3 notes

Expanded NEW into explicit allocation plus placement construction.

### Attempt 4 notes

Applied ABI-guided source register hints to allocator arguments.

### Attempt 5 notes

Tested a narrow line-argument ordering barrier.

## Outcome

All five source forms retained non-target allocator argument scheduling; deferred.
