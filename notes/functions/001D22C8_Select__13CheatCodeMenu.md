# Select__13CheatCodeMenu

- Address: `0x001D22C8`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC menu vtable layout preserves the released no-argument selector's virtual forwarding of `highlighted->entry_num` through slot 0x128.

## Outcome

The released `CheatCodeMenu::Select()` thunk matched exactly on the first attempt.
