# cons__12FloatingTextP4FontG7stringxQ24Font9HORIZJUSTQ24Font8VERTJUSTG7color32

- Address: `0x0014C940`
- Size: `0xE0` (224 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.3929 | 76.7857 | `candidate-round1.cpp` |
| 2 | different | 91.9643 | 91.0714 | `candidate-round2.cpp` |
| 3 | different | 31.5789 | 8.7719 | `candidate-round3.cpp` |
| 4 | different | 91.9643 | 91.0714 | `candidate-round4.cpp` |
| 5 | different | 82.1429 | 76.7857 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released constructor body. The initial reconstructed base size shifted every FloatingText field by four bytes, producing 224 bytes with 43 matching instructions.

### Attempt 2 notes

Corrected the empty-base contribution so location, real coordinate, behavior, and scale offsets matched. The 224-byte candidate matched 51 of 56 instructions; only copy-constructor setup scheduling differed.

### Attempt 3 notes

Pinned the hidden copy destination to the stack pointer. GCC extended the fixed-register lifetime and produced 228 bytes.

### Attempt 4 notes

Named the zero and one constants while retaining the released operations. GCC reproduced attempt 2 byte-for-byte.

### Attempt 5 notes

Added an instruction-free return-address clobber before the base call. The prologue and copy scheduling moved farther from target while retaining 224 bytes.

## Outcome

Deferred after five source-level attempts. The exact 224-byte constructor body and all FloatingText field offsets were recovered, with 51 of 56 instructions matching, but hidden string-copy and prologue scheduling remained different.
