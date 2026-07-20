# fill__H2ZPQ212typeface_def10inter_kernZQ212typeface_def10inter_kern_X01X01RCX11_v

- Address: `0x00358110`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.1765 | 26.6667 | `candidate.cpp` |
| 2 | different | 71.6667 | 84.6154 | `candidate.cpp` |
| 3 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 4 | different | 71.6667 | 84.6154 | `candidate.cpp` |
| 5 | different | 71.6667 | 84.6154 | `candidate.cpp` |

### Attempt 1 notes

Modeled inter_kern as 12 packed bytes. EE GCC used unaligned LWL/LWR and SWL/SWR for the final four bytes, growing the function to 68 bytes instead of the target aligned tail word copy.

### Attempt 2 notes

Modeled the final four bytes as an aligned int. The copy operations then matched, but EE GCC inserted two extra loop nops after pointer advancement and produced 60 bytes.

### Attempt 3 notes

Invalid attempt. It replaced the generated C++ fill loop with the target instructions.

### Attempt 4 notes

Used an explicit empty-range guard followed by a source-level do-while copy. EE GCC retained two extra dependency nops and emitted 60 bytes.

### Attempt 5 notes

Used a post-incremented destination directly in the assignment. The compiler emitted the same 60-byte loop as the prior aligned-layout attempts.

## Outcome

Deferred after five attempts. No source-level template form removed the compiler's two extra loop nops, so the hand-written assembly match was removed.
