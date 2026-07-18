# nglMeshWriteStrip__FUi

- Address: `0x003AA1A8`
- Size: `0xC` (12 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released helper clears the scratch strip vertex index global through a local absolute equate.

## Outcome

The released `nglMeshWriteStrip` global clear matched exactly on the first attempt.
