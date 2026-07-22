# clear_state__17ps2_joypad_device

- Address: `0x001E25D0`
- Size: `0x48` (72 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the released body and new shared ps2_input declarations, but the isolated EE include environment has no standard string.h.

### Attempt 2 notes

Attempt 2 replaced that unavailable include with the released memset declaration; the body then matched exactly.

## Outcome

The released joypad state reset matches exactly with shared controller declarations.
