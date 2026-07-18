# spawn__19generic_anim_animal

- Address: `0x0026FDF0`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.h`
- Reference source: `KS/SRC/ks/floatobj.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target spawn hook assigns state value `2` at offset `0x28`.

## Outcome

The target `generic_anim_animal::spawn` state assignment matched exactly on the first attempt.
