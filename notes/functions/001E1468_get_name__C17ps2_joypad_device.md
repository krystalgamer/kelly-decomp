# get_name__C17ps2_joypad_device

- Address: `0x001E1468`
- Size: `0x34` (52 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released getter uses the shared PS2 input device and `stringx`
declarations. The literal alias preserves the original text address.

## Outcome

The local ABI model was removed; the released getter remains exact.
