# render_passes_needed__C9lensflare

- Address: `0x002FF8D0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/lensflare.h`
- Reference source: `KS/SRC/lensflare.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released lens flare always requests the translucent pass (`2`).

## Outcome

The released `lensflare::render_passes_needed` constant matched exactly on the first attempt.
