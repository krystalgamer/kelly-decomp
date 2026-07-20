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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC menu vtable layout preserves the released virtual `setHigh(yes, true)` call with `yes` at 0x168 and slot 0x18.

## Outcome

The released `PAL60FrontEnd::OnActivate` thunk matched exactly on the first attempt.
