# add_stored__5stashR7os_filePUcUi

- Address: `0x003471E0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.25 | 60.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Used immutable mustash.cpp add_stored behavior and shared exact multistash fields. Attempt 1 folded the field offset into the array base; attempt 2 named the selected multistash reference and matched retail byte-for-byte.
