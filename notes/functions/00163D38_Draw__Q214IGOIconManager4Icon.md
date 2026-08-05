# Draw__Q214IGOIconManager4Icon

- Address: `0x00163D38`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igoiconmanager.cpp`
- Reference source: `KS/SRC/ks/igoiconmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.0 | 10.0 | `size40-frontend-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-frontend-variants-2.cpp` |
| 3 | different | 20.0 | 10.0 | `size40-frontend-variants-3.cpp` |

### Attempt 1 notes

Placing the compiler barrier after the conditional merged both returns; the target restores RA separately on the hidden and drawn paths.

### Attempt 2 notes

The shared icon layout submits its quad only when `show` is set; an ordinary local function pointer preserves the two released return paths.

## Outcome

The released IGO icon draw wrapper matched exactly.
