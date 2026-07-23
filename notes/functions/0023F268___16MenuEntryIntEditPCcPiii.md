# __16MenuEntryIntEditPCcPiii

- Address: `0x0023F268`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.0909 | 81.8182 | `candidate.cpp` |
| 2 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 3 | different | 73.913 | 69.5652 | `candidate.cpp` |
| 4 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 5 | different | 90.9091 | 90.9091 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released four-argument MenuEntryIntEdit constructor and shared declaration with exact vtable/FixValue addresses. Store and prologue scheduling differed.

### Attempt 2 notes

Reordered the independent delta/format assignments and added a non-emitting continuation. This reached 90.91%; only save-ra/copy-this ordering remained.

### Attempt 3 notes

Kept an explicit result alias live through a non-emitting operand boundary. This added an instruction and regressed.

### Attempt 4 notes

Restored the closest form with explicit member qualification. The same two-instruction prologue schedule remained.

### Attempt 5 notes

Used explicit casts for the released constants without the continuation boundary. The compiler retained the 90.91% prologue mismatch.

## Outcome

Released MenuEntryIntEdit constructor remained blocked by an equivalent two-instruction prologue schedule after five source-level attempts.
