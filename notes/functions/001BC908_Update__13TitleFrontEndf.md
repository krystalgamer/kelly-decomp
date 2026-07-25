# Update__13TitleFrontEndf

- Address: `0x001BC908`
- Size: `0xA8` (168 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.8889 | 15.5556 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released active-menu and loading transition paths matched after preventing the final menu update from tail-calling on Sol attempt two.

## Outcome

Matched title front-end updating and loading transition behavior.
