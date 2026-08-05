# face_material_compare__FPCvT0

- Address: `0x002D6958`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.5 | 20.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Spelling the equal-material case first produced a normal bne and the opposite fallthrough layout.

### Attempt 2 notes

The canonical `face` declaration preserves material at offset six and LOD at offset eight; the released comparator remains source-local without a `.globl` bridge.

## Outcome

The local `face_material_compare` comparator matched exactly.
