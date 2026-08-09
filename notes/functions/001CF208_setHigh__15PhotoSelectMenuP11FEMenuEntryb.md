# setHigh__15PhotoSelectMenuP11FEMenuEntryb

- Address: `0x001CF208`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override calls the shared `FEMenu::setHigh`, then mirrors the
highlighted entry number or `-1` into the shared photo-selection state.

## Outcome

The local menu and entry layouts were removed.
