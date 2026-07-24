# OnTick__13MenuSoundDrawf

- Address: `0x002EF308`
- Size: `0x88` (136 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/menusound.cpp`
- Reference source: `KS/SRC/menuSound.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.8571 | 14.2857 | `candidate.cpp` |
| 2 | different | 63.9706 | 50.0 | `candidate.cpp` |
| 3 | different | 29.4118 | 11.7647 | `candidate.cpp` |
| 4 | different | 36.1111 | 16.6667 | `candidate.cpp` |
| 5 | different | 39.2857 | 14.2857 | `candidate.cpp` |

## Outcome

Deferred the released menu-sound volume update after five source-level attempts; source/volume traversal and NSL parameter updates were reconstructed, but global-array pointer scheduling remained different.
