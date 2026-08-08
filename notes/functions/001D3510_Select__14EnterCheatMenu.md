# Select__14EnterCheatMenu

- Address: `0x001D3510`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.5 | 0.0 | `size44-fe-text-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-fe-text-core-2.cpp` |

### Attempt 1 notes

The released source includes the frontend sound event and expands to 80 bytes;
the shipped function contains only the selected-entry dispatch.

### Attempt 2 notes

The shared released menu layout and selected-button dispatch match the shipped
body.

## Outcome

The synthetic vtable layout was removed in favor of the shared class.
