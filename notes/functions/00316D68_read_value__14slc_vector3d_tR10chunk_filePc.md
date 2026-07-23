# read_value__14slc_vector3d_tR10chunk_filePc

- Address: `0x00316D68`
- Size: `0x50` (80 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_vector3d.cpp`
- Reference source: `KS/SRC/script_lib_vector3d.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 1.25 | 0.0 | `candidate.cpp` |
| 2 | different | 72.5 | 65.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Matched immutable slc_vector3d_t::read_value behavior on Sol attempt 3 by expanding the vector serial_in overload and preventing a demonstrated final tail call.
