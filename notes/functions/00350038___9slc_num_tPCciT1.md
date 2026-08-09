# __9slc_num_tPCciT1

- Address: `0x00350038`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released derived constructor uses the shared script-library hierarchy and
native base construction.

## Outcome

The manual vtable install and symbol wrapper were removed; the released
constructor remains exact.
