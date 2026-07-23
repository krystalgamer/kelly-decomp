# __26MenuEntryFunctionFloatEditPcPfPFP9MenuEntryi_bfff

- Address: `0x0023FC10`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 2 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 3 | different | 73.913 | 69.5652 | `candidate.cpp` |
| 4 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 5 | different | 90.9091 | 90.9091 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released no-format MenuEntryFunctionFloatEdit constructor and shared declaration with exact vtable/FixValue addresses. Only save-ra/copy-this prologue ordering differed (90.91%).

### Attempt 2 notes

Added a non-emitting post-FixValue continuation. Code generation remained the same.

### Attempt 3 notes

Kept an explicit result alias live through a non-emitting operand boundary. This added an instruction and regressed.

### Attempt 4 notes

Restored the closest form with explicit member qualification. The same prologue ordering remained.

### Attempt 5 notes

Used an explicitly cast null format without the continuation boundary. The compiler retained the 90.91% prologue mismatch.

## Outcome

Released MenuEntryFunctionFloatEdit constructor remained blocked by an equivalent two-instruction prologue schedule after five source-level attempts.
