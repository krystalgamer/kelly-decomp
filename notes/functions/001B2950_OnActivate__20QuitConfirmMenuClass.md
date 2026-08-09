# OnActivate__20QuitConfirmMenuClass

- Address: `0x001B2950`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.4375 | 93.75 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first authentic layout omitted the released question field, placing noEntry four bytes early.

### Attempt 2 notes

The shared quit-confirm menu declaration preserves the question/no-entry
layout, base activation, and virtual `setHigh` dispatch.

## Outcome

The manual menu vtable and local class layout were removed.
