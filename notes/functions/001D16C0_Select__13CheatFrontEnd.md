# Select__13CheatFrontEnd

- Address: `0x001D16C0`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size48-frontend-selectors.cpp` |

### Attempt 1 notes

The shared cheat frontend declaration preserves the no-argument selector's
virtual forwarding of `highlighted->entry_num`.

## Outcome

The manual vtable layout was removed.
