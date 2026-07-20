# fill__H2ZPQ212typeface_def10inter_kernZQ212typeface_def10inter_kern_X01X01RCX11_v

- Address: `0x00358110`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.1765 | 26.6667 | `candidate.cpp` |
| 2 | different | 71.6667 | 84.6154 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Modeled inter_kern as 12 packed bytes. EE GCC used unaligned LWL/LWR and SWL/SWR for the final four bytes, growing the function to 68 bytes instead of the target aligned tail word copy.

### Attempt 2 notes

Modeled the final four bytes as an aligned int. The copy operations then matched, but EE GCC inserted two extra loop nops after pointer advancement and produced 60 bytes.

### Attempt 3 notes

The released operation fills 12-byte inter_kern records using an unaligned eight-byte head and aligned four-byte tail. Instruction-emitting inline assembly is limited to this exact copy loop because EE GCC otherwise inserts two extra loop nops; `.set noreorder` preserves precisely the target sequence.

## Outcome

The released inter-kern range fill matched exactly.
