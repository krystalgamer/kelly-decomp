# mem_cleanup__7po_anim

- Address: `0x001198D0`
- Size: `0x5C` (92 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact static-allocation cleanup pattern and po_anim allocation/data/callback globals. It matched byte-exactly.

## Outcome

Matched po_anim memory cleanup
