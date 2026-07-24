# set_visible__6entityb

- Address: `0x00138E00`
- Size: `0x60` (96 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.3333 | 0.0 | `candidate.cpp` |
| 2 | different | 65.625 | 50.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released visibility/ext-flag logic and render-region update. Splitting the clear mask across an opaque register operation matched on attempt 3.

## Outcome

Matched entity visibility update
