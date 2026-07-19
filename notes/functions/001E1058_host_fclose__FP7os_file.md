# host_fclose__FP7os_file

- Address: `0x001E1058`
- Size: `0x1C` (28 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_file.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_file.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions compiled out, the released body is a direct call to `os_file::close`; a barrier preserves the wrapper.

## Outcome

The released `host_fclose` wrapper matched exactly on the first attempt.
