# Select__13BoardFrontEndi

- Address: `0x001DDAD8`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BoardFrontEnd.h`
- Reference source: `KS/SRC/ks/BoardFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 80.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released wrapper ignores `entry`; a minimal old-GCC vtable layout preserves the zero-argument Select adjustment/function slots.

## Outcome

The released `BoardFrontEnd::Select` virtual thunk matched exactly.
