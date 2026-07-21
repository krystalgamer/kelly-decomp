# frame_advance__14morphable_itemf

- Address: `0x0028BE88`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.375 | 50.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base advance and count-change check compiled the conditional set_range_visrep call as a tail call and emitted 64 bytes.

### Attempt 2 notes

The reviewed empty barrier narrowly prevents the demonstrated conditional tail optimization and yields the exact released control flow.

## Outcome

The released base frame advance and range update match exactly with one reviewed barrier preventing a demonstrated conditional tail optimization.
