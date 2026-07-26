# FindVectorSlow__8CodeBookRC8cbVector

- Address: `0x00262CB0`
- Size: `0xBC` (188 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_codebook.cpp`
- Reference source: `KS/SRC/ks/dxt1_codebook.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.617 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The exact released search loop matches after resolving the table index and
vector distance calls.

## Outcome

Released codebook nearest-vector search reproduces the target exactly.
