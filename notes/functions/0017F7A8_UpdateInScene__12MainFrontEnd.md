# UpdateInScene__12MainFrontEnd

- Address: `0x0017F7A8`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-menu null guard and virtual UpdateInScene dispatch matched exactly with `active` at offset 0x60 and UpdateInScene at virtual slot 0x5c.

## Outcome

The released main-frontend scene-update forwarding matched exactly on the first attempt.
