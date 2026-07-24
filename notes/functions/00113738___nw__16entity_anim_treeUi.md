# __nw__16entity_anim_treeUi

- Address: `0x00113738`
- Size: `0x88` (136 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.9412 | 11.7647 | `candidate.cpp` |
| 2 | different | 21.7105 | 13.1579 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 86.0294 | 70.5882 | `candidate.cpp` |
| 5 | different | 53.5714 | 45.7143 | `candidate.cpp` |

## Outcome

Deferred the released entity-animation-tree static-pool allocator after five source-level attempts; the 1000-slot scan, allocation bookkeeping, 164-byte stride, and exhaustion path were reconstructed, but compiler register allocation remained different.
