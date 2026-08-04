# OnOpen__10KSMainMenuP4MenuP10MenuSystem

- Address: `0x00235B70`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-gameplay-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-gameplay-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-gameplay-probes-3.cpp` |

## Outcome

All three canonical forms clear `superduperpausehack` and tail-call `Menu::OnOpen` in 12 bytes. The target retains a 32-byte frame, so the manual C-style wrapper was removed.
