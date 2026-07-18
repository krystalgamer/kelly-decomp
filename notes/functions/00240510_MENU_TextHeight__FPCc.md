# MENU_TextHeight__FPCc

- Address: `0x00240510`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menungl.cpp`
- Reference source: `KS/SRC/ks/menungl.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released PS2 `menufontscale` constant is `1.0f`, so the folded text height is `10`.

## Outcome

The released constant-folded `MENU_TextHeight` result matched exactly on the first attempt.
