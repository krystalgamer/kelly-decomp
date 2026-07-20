# UpdateInScene__11FEMenuEntry

- Address: `0x001DA7C0`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

A minimal public TextString vtable layout preserves the released virtual `text->UpdateInScene(false)` call through slot 0xe8.

## Outcome

The released `FEMenuEntry::UpdateInScene` thunk matched exactly on attempt two.
