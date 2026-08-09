# OnCross__15PhotoSelectMenui

- Address: `0x001CF0A8`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size48-frontend-core.cpp` |

### Attempt 1 notes

The shared photo-menu declaration preserves the virtual
`Select(highlighted->entry_num)` call.

## Outcome

The manual vtable layout was removed.
