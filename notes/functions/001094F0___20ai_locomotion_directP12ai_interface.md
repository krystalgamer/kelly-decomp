# __20ai_locomotion_directP12ai_interface

- Address: `0x001094F0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion_direct.cpp`
- Reference source: `KS/SRC/ai_locomotion_direct.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base-constructor delegation, type assignment, and compiler-generated derived vtable install produced the exact 15-instruction sequence. Only the isolated old-GCC `_vt$20ai_locomotion_direct` relocation bytes remained unresolved.

### Attempt 2 notes

The shared locomotion hierarchy and established carried vtable alias preserve
the released base construction and type assignment.

## Outcome

The released constructor was already canonical and remains exact.
