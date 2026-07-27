# create_anim__10anim_makerRC7stringxRC17entity_track_treeP6entityUsfisP13entity_widget

- Address: `0x0011DE18`
- Size: `0xF4` (244 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim_maker.cpp`
- Reference source: `KS/SRC/anim_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 99.1803 | 96.7213 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Attempt 1 used the exact released body with directly required declarations and matched 242/244 bytes; its isolated entity_anim_tree declaration had size 1 and used the wrong high half for the authentic source-file address. Attempt 2 corrected the authentic 164-byte class size and 0x004C9E38 source-file address, producing an exact 244-byte match.

### Attempt 3 notes

Attempts 1-2 established the exact released create_anim body and target addresses, but used an isolated per-function stand-in. Attempt 3 replaced that stand-in with a reusable anim_maker shared declaration reconstructed from the released anim_maker API, entity track/tree layouts, static-allocation operator, widget animation API, and world animation API; the combined header include and unchanged function body matched all 244 bytes.

## Outcome

Exact released create_anim body matched with a reusable released-source-derived shared declaration; no tracked files were changed.
