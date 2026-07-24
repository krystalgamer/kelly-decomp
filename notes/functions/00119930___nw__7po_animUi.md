# __nw__7po_animUi

- Address: `0x00119930`
- Size: `0x88` (136 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.0294 | 70.5882 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released PO-animation static allocator matched after binding the generated pool registers and using an integer overlay for the four-byte bool allocation table.

## Outcome

The released PO-animation static-pool allocator matched exactly on the second attempt.
