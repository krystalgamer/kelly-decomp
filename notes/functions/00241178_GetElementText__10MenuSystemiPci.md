# GetElementText__10MenuSystemiPci

- Address: `0x00241178`
- Size: `0x38` (56 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released function uses the shared menu hierarchy to forward to the active
menu or copy the empty terminator. A local forwarding pointer preserves the
non-tail call.

## Outcome

The local menu layout and compiler barrier were removed.
