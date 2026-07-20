# ReadShort__FPUcRi

- Address: `0x00153450`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.5455 | 36.3636 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Precomputing the indexed pointer and index update changed the released load/store schedule.

### Attempt 2 notes

The released reader combines two little-endian bytes, advances the shared index by two, and sign-extends the result.

## Outcome

The released `ReadShort` helper matched exactly.
