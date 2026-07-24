# _$_10RandomText

- Address: `0x001D8A98`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact RandomText/TextString layouts, both stringx member offsets, base vtable, and deleting flag behavior. It matched on attempt 1.

## Outcome

Matched random text destructor
