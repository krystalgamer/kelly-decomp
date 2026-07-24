# destroy_entity__12entity_makerP6entity

- Address: `0x0030B040`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 47.8261 | 26.087 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released world/widget branch and entity deleting-destructor slot. A non-tail world-destroy continuation matched on attempt 3.

## Outcome

Matched entity maker destruction dispatch
