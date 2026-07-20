# OnRight__13TitleFrontEndi

- Address: `0x001BC9E8`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-menu null guard and virtual OnRight forwarding matched exactly with `active` at offset 0x60 and OnRight at virtual slot 0xb4.

## Outcome

The released title-frontend right handler matched exactly on the first attempt.
