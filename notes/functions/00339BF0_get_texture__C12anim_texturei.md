# get_texture__C12anim_texturei

- Address: `0x00339BF0`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/material.cpp`
- Reference source: `KS/SRC/material.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 83.3333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Advancing the local texture pointer after unsigned modulo preserves target `$a2` reuse for the final indexed load.

## Outcome

The released `anim_texture::get_texture` implementation matched exactly on attempt two.
