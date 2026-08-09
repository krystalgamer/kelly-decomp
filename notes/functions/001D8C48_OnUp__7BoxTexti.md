# OnUp__7BoxTexti

- Address: `0x001D8C48`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size48-navigation-core.cpp` |

### Attempt 1 notes

The shared BoxText declaration preserves the released virtual
`scroll(true, 1)` call.

## Outcome

The manual vtable layout was removed.
