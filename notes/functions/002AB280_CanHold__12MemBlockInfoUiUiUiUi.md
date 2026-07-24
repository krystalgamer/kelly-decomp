# CanHold__12MemBlockInfoUiUiUiUi

- Address: `0x002AB280`
- Size: `0x70` (112 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released MemBlockInfo layout, high/low allocation branches, alignment helpers, and size checks. The exact source-level logic matched on attempt 1.

## Outcome

Matched memory block capacity check
