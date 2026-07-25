# close__7os_file

- Address: `0x001E03A0`
- Size: `0xAC` (172 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_file.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_file.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.093 | 95.3488 | `candidate.cpp` |
| 2 | different | 98.2558 | 100.0 | `candidate.cpp` |
| 3 | different | 99.4186 | 97.6744 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released error path, bounded sceClose retry loop, and state reset matched on Sol attempt four after correcting negative-low global and string relocations.

## Outcome

Matched PS2 file closing and retry handling.
