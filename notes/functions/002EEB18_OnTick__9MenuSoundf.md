# OnTick__9MenuSoundf

- Address: `0x002EEB18`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/menusound.cpp`
- Reference source: `KS/SRC/menuSound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 83.3333 | `candidate.cpp` |
| 2 | different | 87.5 | 83.3333 | `candidate.cpp` |
| 3 | different | 56.25 | 25.0 | `candidate.cpp` |
| 4 | different | 95.8333 | 83.3333 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released method virtually forwards the tick to global `MENUSOUND_MenuSources`. A matching-only fixed `$v1` page-base temporary preserves the target stack/address interleave and later vtable-function register reuse; it emits no extra target instruction.

## Outcome

The released `MenuSound::OnTick` wrapper matched exactly on attempt five.
