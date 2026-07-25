# ifl_pause__6entity

- Address: `0x00130FD8`
- Size: `0x98` (152 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.25 | 47.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Used the exact released visual-representation guard, lock state, animation length, time conversion, warning, and virtual IFL lock flow. Restoring the frame_info type name and non-tail warning path matched exactly.

## Outcome

Matched entity IFL pause
