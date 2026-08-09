# PhotoExistsForLevel__6Careeri

- Address: `0x0025AF98`
- Size: `0x30` (48 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size48-gameplay-core.cpp` |

### Attempt 1 notes

The shared career and compressed-photo declarations preserve the
`GetPhotoForLevel` short circuit and validity flag at offset 0x2004.

## Outcome

The local photo layouts were removed.
