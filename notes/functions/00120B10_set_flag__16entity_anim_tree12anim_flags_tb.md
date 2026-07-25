# set_flag__16entity_anim_tree12anim_flags_tb

- Address: `0x00120B10`
- Size: `0x94` (148 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.h`
- Reference source: `KS/SRC/entity_anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5676 | 5.4054 | `candidate.cpp` |
| 2 | different | 75.6757 | 64.8649 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released three-way flag propagation matched after moving the base virtual dispatch vtable load inside each torf branch.

## Outcome

The released function matched exactly.
