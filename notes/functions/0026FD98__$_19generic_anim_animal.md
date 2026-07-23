# _$_19generic_anim_animal

- Address: `0x0026FD98`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.h`
- Reference source: `KS/SRC/ks/floatobj.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released generic_anim_animal inheritance and empty destructor plus the established generic_anim generated destructor pattern. Reused the base stringx/vtable/deleting-mode reconstruction and matched byte-exactly.

## Outcome

Matched generated generic_anim_animal destructor
