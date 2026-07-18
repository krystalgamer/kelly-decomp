# spawn__17generic_anim_misc

- Address: `0x0026FD10`
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

The target spawn hook assigns state value `5` at offset `0x34`.

## Outcome

The target `generic_anim_misc::spawn` state assignment matched exactly on the first attempt.
