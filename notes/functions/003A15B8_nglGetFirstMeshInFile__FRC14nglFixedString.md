# nglGetFirstMeshInFile__FRC14nglFixedString

- Address: `0x003A15B8`
- Size: `0x34` (52 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.5714 | 42.8571 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used an explicit negative null guard. EE GCC emitted a bnezl success branch plus an unconditional branch for the null return, growing the function to 56 bytes.

### Attempt 2 notes

The released mesh-file bank search uses the shared NGL instance and mesh-file
declarations. The bank alias preserves the target relocation.

## Outcome

The local bank/file layouts were removed; the released lookup remains exact.
