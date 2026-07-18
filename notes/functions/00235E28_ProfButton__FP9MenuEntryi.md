# ProfButton__FP9MenuEntryi

- Address: `0x00235E28`
- Size: `0x14` (20 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target callback sets the profiler byte global and returns `true`.

## Outcome

The target `ProfButton` global byte store and success return matched exactly on the first attempt.
