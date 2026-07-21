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

Bound the compiler-emitted `_vt$20ai_locomotion_direct` symbol with the established carried absolute alias. The released constructor then matched all 60 bytes exactly.

## Outcome

The released derived constructor exactly matches with the authentic base construction, locomotion type assignment, and compiler-generated old-GCC vtable install.
