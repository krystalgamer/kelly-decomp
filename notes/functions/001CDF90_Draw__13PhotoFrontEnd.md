# Draw__13PhotoFrontEnd

- Address: `0x001CDF90`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-menu null guard and virtual Draw forwarding matched exactly with `active` at offset 0x60 and Draw at virtual slot 0x4c.

## Outcome

The released photo-frontend draw forwarding matched exactly on the first attempt.
