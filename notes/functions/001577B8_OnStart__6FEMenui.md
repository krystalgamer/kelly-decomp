# OnStart__6FEMenui

- Address: `0x001577B8`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-submenu null guard and virtual OnStart dispatch matched exactly with `active` at offset 0x60, the submenu vtable at 0x74, and OnStart at virtual slot 0x94.

## Outcome

The released FE menu start-button forwarding matched exactly on the first attempt.
