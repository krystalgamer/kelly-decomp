# OnActivate__12FreesurfMenu

- Address: `0x001853F8`
- Size: `0xE0` (224 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.6607 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released body and existing shared menu declarations. All instructions matched, but the isolated base OnActivate call retained an unresolved relocation and differed in three encoded bytes.

### Attempt 2 notes

Kept the exact released body and added the source-local binding for FEMenu::OnActivate. This matched all 224 bytes and 56 instructions.

## Outcome

Matched the released freesurf activation logic using the shared front-end layout and a source-local binding for the FEMenu base activation call.
