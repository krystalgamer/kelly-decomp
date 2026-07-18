# SetPQ__20FEGraphicalMenuEntryP9PanelQuad

- Address: `0x001DAF50`
- Size: `0x10` (16 bytes)
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

The released method stores `pq` at `0x64` and calls the inline `AddedToMenu`, which sets `on_menu` at quad offset `0x110`. Restoring the helper call matched on attempt two.

## Outcome

The released `FEGraphicalMenuEntry::SetPQ` pointer and flag stores matched on attempt two with the source-faithful inline helper.
