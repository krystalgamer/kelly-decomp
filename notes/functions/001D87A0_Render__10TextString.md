# Render__10TextString

- Address: `0x001D87A0`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released no-argument Render wrapper matched exactly with `text` at offset 0x4, x/y at 0xc/0x10, the vtable at 0x4c, and the text-render overload at virtual slot 0x11c.

## Outcome

The released TextString render wrapper matched exactly on the first attempt.
