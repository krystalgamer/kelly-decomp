# OnOpen__4MenuP4MenuP10MenuSystem

- Address: `0x0023EAE0`
- Size: `0x90` (144 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.5278 | 86.1111 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 89.5833 | 63.8889 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released menu-open loop matched after routing the entry count through an inline v0-bound accessor.

## Outcome

The released function matched exactly.
