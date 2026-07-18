# SetPQHigh__20FEGraphicalMenuEntryP9PanelQuad

- Address: `0x001DAF60`
- Size: `0x10` (16 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method stores `pq_high` at `0x68` and marks the pointed quad `on_menu` at offset `0x110`.

## Outcome

The released `FEGraphicalMenuEntry::SetPQHigh` pointer and flag stores matched exactly on the first attempt.
