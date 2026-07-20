# ToggleShowRumble__FP9MenuEntryi

- Address: `0x00236630`
- Size: `0x24` (36 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released callback toggles the global rumble draw flag only for command seven and always returns true.

## Outcome

The released `ToggleShowRumble` callback matched exactly.
