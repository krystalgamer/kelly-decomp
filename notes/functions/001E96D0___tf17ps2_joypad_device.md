# __tf17ps2_joypad_device

- Address: `0x001E96D0`
- Size: `0x50` (80 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.h`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Compiler-generated ps2_joypad_device RTTI lazily initializes its input_device base and calls __rtti_si with exact immutable class hierarchy addresses.
