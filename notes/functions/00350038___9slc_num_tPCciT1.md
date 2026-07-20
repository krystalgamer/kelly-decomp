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

The released derived constructor matched exactly through script_library_class base construction and the slc_num_t vtable install at offset 0x20.

## Outcome

The released slc_num_t constructor matched exactly on the first attempt.
