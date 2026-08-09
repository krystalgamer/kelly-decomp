# OnCross__19MultiControllerMenui

- Address: `0x001DC948`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.h`
- Reference source: `KS/SRC/ks/MainFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size48-navigation-core-2.cpp` |

### Attempt 1 notes

The shared multi-controller menu declaration preserves virtual forwarding of
`highlighted->entry_num`.

## Outcome

The manual vtable layout was removed.
