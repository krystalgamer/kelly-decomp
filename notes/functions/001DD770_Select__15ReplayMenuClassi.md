# Select__15ReplayMenuClassi

- Address: `0x001DD770`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.h`
- Reference source: `KS/SRC/ks/FrontEndMenus.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 80.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released wrapper ignores `entry`; a minimal old-GCC vtable layout preserves the zero-argument ReplayStart adjustment/function slots.

## Outcome

The released `ReplayMenuClass::Select` virtual thunk matched exactly.
