# __17script_controller

- Address: `0x00318348`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_controller.cpp`
- Reference source: `KS/SRC/script_lib_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty derived constructor matched exactly through signaller base construction and the script-controller vtable install at offset 0x8. The adjusted vtable alias reproduces the HI16 carry for the real 0x004fc988 table.

## Outcome

The released script-controller constructor matched exactly on the first attempt.
