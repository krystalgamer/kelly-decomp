# GetValue__17MenuEntryEnumEdit

- Address: `0x002402E8`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.4762 | 9.5238 | `candidate.cpp` |
| 2 | different | 25.0 | 0.0 | `candidate.cpp` |
| 3 | different | 59.5238 | 33.3333 | `candidate.cpp` |
| 4 | different | 59.5238 | 38.0952 | `candidate.cpp` |
| 5 | different | 40.4762 | 9.5238 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released MenuEntryEnumEdit::GetValue body and shared hierarchy. The compiler chose indexed addressing and a different equivalent branch layout.

### Attempt 2 notes

Replaced indexed access with a source-level pointer induction loop. This reduced size and did not reproduce the released control flow.

### Attempt 3 notes

Kept the released semantics but made the found/scan/loop labels explicit. This improved branch and pointer-loop similarity to 59.52%.

### Attempt 4 notes

Deferred loop-index initialization to the scan label to reproduce the target register lifetime and initial load register. The compiler still laid out return blocks differently.

### Attempt 5 notes

Restored the exact released body over a minimal exact-offset hierarchy without the shared pragma. It returned to the original indexed code generation.

## Outcome

Released MenuEntryEnumEdit getter remained blocked by equivalent branch and loop-induction code generation after five source-level attempts.
