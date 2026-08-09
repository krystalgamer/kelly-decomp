# OnTick__9MenuSoundf

- Address: `0x002EEB18`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/menusound.cpp`
- Reference source: `KS/SRC/menuSound.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 83.3333 | `candidate.cpp` |
| 2 | different | 87.5 | 83.3333 | `candidate.cpp` |
| 3 | different | 95.8333 | 83.3333 | `candidate.cpp` |

### Attempt 3 notes

The released virtual forward through `MENUSOUND_MenuSources` swaps the initial
stack adjustment and global page load relative to the target.

## Outcome

The prior exact form required a fixed-register temporary and inline compiler
barrier. Those matching-only annotations were removed and the wrapper was
deferred.
