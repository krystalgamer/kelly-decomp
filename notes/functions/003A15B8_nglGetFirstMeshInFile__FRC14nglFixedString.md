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

The released mesh-file bank search and first-mesh return matched exactly with Instance::Value at 0x20 and nglMeshFile::FirstMesh at 0x130. The bank alias is HI16-adjusted for the real 0x004abfe0 global.

## Outcome

The released first-mesh-in-file lookup matched exactly.
