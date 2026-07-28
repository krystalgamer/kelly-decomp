# set_ifc_vec__18physical_interfaceRC7pstringRC8vector3d

- Address: `0x00126B88`
- Size: `0x150` (336 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/physical_interface.cpp`
- Reference source: `KS/SRC/physical_interface.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 35.5114 | 18.1818 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released physical_interface::set_ifc_vec body with an initial declaration context and compile failed. This attempt is preserved honestly; the lane subsequently exceeded the first-pass cap.

### Attempt 2 notes

Attempt 2 preserved the exact released body with a revised declaration context. It emitted the target symbol and differed at 35.5114% bytes and 18.1818% instructions.

### Attempt 3 notes

Attempt 3 preserved the exact released body with another declaration-context extraction and compile failed. No further attempt was made.

## Outcome

Three exact-body declaration-context attempts were preserved; the best emitted target symbol differed at 35.5114%.
