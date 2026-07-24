# __nw__t11linear_anim1Z8vector3dUi

- Address: `0x00119DB0`
- Size: `0x88` (136 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.6176 | 41.1765 | `candidate.cpp` |
| 2 | different | 58.8235 | 55.8824 | `candidate.cpp` |
| 3 | different | 58.8235 | 55.8824 | `candidate.cpp` |
| 4 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 19.4444 | 11.1111 | `candidate.cpp` |

## Outcome

Deferred the released vector linear-animation static allocator after five source-level attempts; the pool scan, slot bookkeeping, 16-byte indexing, and exhaustion path were reconstructed, but loop reload scheduling remained different.
