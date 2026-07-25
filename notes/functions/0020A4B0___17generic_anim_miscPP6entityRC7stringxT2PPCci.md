# __17generic_anim_miscPP6entityRC7stringxT2PPCci

- Address: `0x0020A4B0`
- Size: `0xB8` (184 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.4348 | 78.2609 | `candidate.cpp` |
| 2 | different | 61.9565 | 54.3478 | `candidate.cpp` |
| 3 | different | 49.4565 | 45.6522 | `candidate.cpp` |
| 4 | different | 77.1739 | 76.087 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The exact released delegating constructor matched using the expanded shared source-faithful `generic_anim` and `generic_anim_misc` declarations. A narrowly exact EE scheduling normalization restores only the shipped callee-save ordering around the inline base constructor; the full 3,856-function ROM rebuild passed.

## Outcome

Matched the released generic miscellaneous animation constructor with shared animation declarations and precise EE scheduling.
