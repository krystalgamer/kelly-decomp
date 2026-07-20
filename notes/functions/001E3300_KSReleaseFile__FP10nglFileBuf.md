# KSReleaseFile__FP10nglFileBuf

- Address: `0x001E3300`
- Size: `0x34` (52 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.0 | 46.1538 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released world-dynamics file release followed by clearing the 12-byte nglFileBuf. EE GCC converted the final memset into a sibling tail jump, moving the epilogue ahead of the call and producing 48 bytes.

### Attempt 2 notes

The released file-buffer release and 12-byte clear matched exactly. The trailing empty barrier prevents EE GCC from replacing memset with a sibling tail jump.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released KS file-release wrapper matched exactly.
