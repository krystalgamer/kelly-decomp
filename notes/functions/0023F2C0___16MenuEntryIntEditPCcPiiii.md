# __16MenuEntryIntEditPCcPiiii

- Address: `0x0023F2C0`
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
| 3 | different | 78.5714 | 71.4286 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released five-argument MenuEntryIntEdit constructor with the shared class declaration. The body and size matched, with only absolute relocations and a two-instruction prologue schedule differing.

### Attempt 2 notes

Bound the exact released vtable and FixValue addresses. All bytes except the equivalent save-ra / copy-this schedule matched (90.48%).

### Attempt 3 notes

Reconstructed the same released stores through a source-level layout and extern-C constructor alias. Store scheduling regressed while preserving behavior.

### Attempt 4 notes

Tried the matching shared declaration with implementation emission enabled; the legacy compiler rejected the pragma in the candidate wrapper context.

### Attempt 5 notes

Restored the exact shared constructor and added the established non-emitting compiler barrier after FixValue; the isolated candidate lacked that integration macro and failed compilation.

## Outcome

Released MenuEntryIntEdit constructor remained blocked by an equivalent two-instruction prologue schedule after five source-level attempts.
