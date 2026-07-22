# SaveScoringButton__FP9MenuEntryi

- Address: `0x0030F440`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/ks/menu_scoring.cpp`
- Reference source: `KS/SRC/ks/menu_scoring.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used immutable `ks/menu_scoring.cpp:33-45` and created a shared original-style
os_file lock declaration.  The adjusted symbolic address preserves the retail
signed low half for the static lock flag.

## Outcome

Matched unlock, scoring save, relock, and success return byte-for-byte.
