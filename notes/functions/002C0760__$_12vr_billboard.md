# _$_12vr_billboard

- Address: `0x002C0760`
- Size: `0x60` (96 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/billboard.cpp`
- Reference source: `KS/SRC/billboard.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released empty destructor and generated billboard/mat_fac/visual_rep vtable and delete flow. It matched on attempt 1.

## Outcome

Matched billboard visual destructor
