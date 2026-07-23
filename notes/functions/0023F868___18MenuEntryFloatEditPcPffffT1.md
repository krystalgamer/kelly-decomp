# __18MenuEntryFloatEditPcPffffT1

- Address: `0x0023F868`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 90.4762 | `candidate.cpp` |
| 2 | different | 90.4762 | 90.4762 | `candidate.cpp` |
| 3 | different | 90.4762 | 90.4762 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released formatted MenuEntryFloatEdit constructor and shared declaration. The body differed only at relocations and two prologue instructions.

### Attempt 2 notes

Bound the exact vtable and FixValue addresses. Only the equivalent save-ra / copy-this ordering remained (90.48%).

### Attempt 3 notes

Reconstructed the same released stores through a source-level layout and extern-C alias; it retained the same 90.48% prologue-only mismatch.

### Attempt 4 notes

Tried implementation emission with the shared declaration; the legacy compiler rejected the pragma in the candidate wrapper context.

### Attempt 5 notes

Restored the exact shared constructor with the established non-emitting compiler barrier after FixValue; the candidate environment did not define that integration macro and compilation failed.

## Outcome

Released formatted MenuEntryFloatEdit constructor remained blocked by an equivalent two-instruction prologue schedule after five source-level attempts.
