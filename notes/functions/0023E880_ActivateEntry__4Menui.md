# ActivateEntry__4Menui

- Address: `0x0023E880`
- Size: `0xBC` (188 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released deactivate/activate state transition matches on the first
attempt using the shared menu declarations.

## Outcome

Released menu entry deactivation, activation, and active-index update reproduce the target exactly.
