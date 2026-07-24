# playback_demo_stop__17ps2_joypad_device

- Address: `0x001E1D68`
- Size: `0x68` (104 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.4242 | 0.0 | `candidate.cpp` |
| 2 | different | 17.4242 | 0.0 | `candidate.cpp` |
| 3 | different | 17.4242 | 0.0 | `candidate.cpp` |
| 4 | different | 17.3611 | 0.0 | `candidate.cpp` |
| 5 | different | 24.0385 | 5.0 | `candidate.cpp` |

## Outcome

Deferred PS2 demo playback stop after five source-faithful candidates; released empty-destructor vector-delete loop retained compiler nops that standalone C++ did not reproduce
