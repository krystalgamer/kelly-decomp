# OnRight__14SoundMenuClassi

- Address: `0x001AAAA0`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.6667 | 11.1111 | `size36-sound-right-1.cpp` |
| 2 | different | 16.6667 | 11.1111 | `size36-sound-right-2.cpp` |
| 3 | different | 16.6667 | 11.1111 | `size36-sound-right-3.cpp` |

### Attempt 1 notes

The direct released expression compiles as a 16-byte sibling call instead of the target retained frame.

### Attempt 2 notes

Loading the canonical highlighted entry through a local pointer emits the same sibling call.

### Attempt 3 notes

Loading the entry number into a local before calling `Change` also emits the same sibling call.

## Outcome

The barrier-dependent wrapper was removed and the original target function was deferred.
