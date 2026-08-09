# OnActivate__13PAL60FrontEnd

- Address: `0x001D5740`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PAL60FrontEnd.cpp`
- Reference source: `KS/SRC/ks/PAL60FrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size48-frontend-selectors.cpp` |

### Attempt 1 notes

The shared PAL frontend declaration preserves the released virtual
`setHigh(yes, true)` call and `yes` member offset.

## Outcome

The manual vtable layout was removed.
