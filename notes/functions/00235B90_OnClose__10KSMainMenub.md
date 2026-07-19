# OnClose__10KSMainMenub

- Address: `0x00235B90`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The active released body forwards to `Menu::OnClose`; a barrier prevents a sibling call.

## Outcome

The released `KSMainMenu::OnClose` forwarding wrapper matched exactly on the first attempt.
