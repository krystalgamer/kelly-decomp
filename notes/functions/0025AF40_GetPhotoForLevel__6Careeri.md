# GetPhotoForLevel__6Careeri

- Address: `0x0025AF40`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released Career::GetPhotoForLevel body, CareerData goal values and level count, CareerData stride/goal offset, CompressedPhoto size, and Career photo-array offset. Reconstructed those released layouts and matched byte-exactly.

## Outcome

Matched released Career::GetPhotoForLevel body
