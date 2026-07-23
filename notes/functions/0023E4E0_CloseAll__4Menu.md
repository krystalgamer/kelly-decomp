# CloseAll__4Menu

- Address: `0x0023E4E0`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released Menu::CloseAll body and Menu fields. Reconstructed isopen/closeto offsets, Close(true), and the shared virtual recursive CloseAll dispatch slots.

## Outcome

Matched released Menu::CloseAll body
