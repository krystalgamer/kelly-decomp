# OnDown__13PhotoFrontEndi

- Address: `0x001CE198`
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

The released active-menu null guard and virtual OnDown forwarding matched exactly with `active` at offset 0x60 and OnDown at virtual slot 0xa4.

## Outcome

The released photo-frontend OnDown forwarding matched exactly on the first attempt.
