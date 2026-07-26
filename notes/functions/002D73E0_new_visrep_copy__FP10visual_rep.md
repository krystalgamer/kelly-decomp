# new_visrep_copy__FP10visual_rep

- Address: `0x002D73E0`
- Size: `0xDC` (220 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/visrep.cpp`
- Reference source: `KS/SRC/visrep.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 65.4545 | `candidate-round1.cpp` |
| 2 | different | 14.7887 | 2.8169 | `candidate-round2.cpp` |
| 3 | different | 93.1818 | 90.9091 | `candidate-round3b.cpp` |
| 4 | different | 93.1818 | 90.9091 | `candidate-round4.cpp` |
| 5 | different | 33.0357 | 16.0714 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the released type switch and reconstructed visual_rep, vr_billboard, mat_fac, axis, and allocation declarations. The implicit copy was 220 bytes, but the billboard layout was eight bytes too small and the allocation description was relocatable.

### Attempt 2 notes

Added concrete tail storage to move billboard fields. The storage itself was copied, expanding the constructor path to 284 bytes.

### Attempt 3 notes

Aligned mat_fac to eight bytes instead of adding copied storage and bound the allocation description. This recovered the exact 328-byte object and 220-byte function; only five scheduling instructions differed.

### Attempt 4 notes

Added explicit visual_rep and vr_billboard copy constructors. The generated body remained byte-for-byte equivalent to attempt 3.

### Attempt 5 notes

Pinned the allocation arguments and used placement construction to target the remaining setup order. The fixed-register lifetimes expanded the function to 224 bytes and disrupted the copy schedule.

## Outcome

Deferred after five source-level attempts. The exact billboard size, base layout, material copy, axis/scalar copies, vtable, allocation address, and 220-byte body were recovered, but five independent setup/store instructions remained scheduled differently.
