# add_buf_to_cache__7stringxP10string_buf

- Address: `0x0034DEB8`
- Size: `0xB8` (184 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.2941 | 17.6471 | `candidate.cpp` |
| 2 | different | 36.413 | 19.5652 | `candidate.cpp` |
| 3 | different | 39.6739 | 26.087 | `candidate.cpp` |
| 4 | different | 38.0435 | 23.913 | `candidate.cpp` |
| 5 | different | 32.0652 | 17.3913 | `candidate.cpp` |

### Attempt 5 notes

Used the exact released cache bounds, 22,100-buffer layout, 16-entry buckets, LRU arrays, and linked addresses in the shared string declaration. Five source-level scans reproduced the cache behavior but could not reproduce the target's index/pointer register assignment and compiler-inserted loop nop without forbidden instruction-emitting asm, so shared edits were reverted.

## Outcome

Deferred string buffer cache insertion after five source-level attempts could not reproduce its loop register schedule and target-only nop.
