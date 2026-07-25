# _$_11entity_anim

- Address: `0x001208B8`
- Size: `0x94` (148 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.h`
- Reference source: `KS/SRC/entity_anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released entity-animation destructor matched with exact subanimation virtual destruction, detach, and conditional custom delete flow.

## Outcome

The released entity-animation destructor matched exactly on the first attempt.
