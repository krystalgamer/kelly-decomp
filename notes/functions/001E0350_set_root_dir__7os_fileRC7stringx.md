# set_root_dir__7os_fileRC7stringx

- Address: `0x001E0350`
- Size: `0x24` (36 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_file.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_file.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 2.7778 | 0.0 | `size36-file-dirs-1.cpp` |
| 2 | different | 2.7778 | 0.0 | `size36-file-dirs-2.cpp` |
| 3 | different | 2.7778 | 0.0 | `size36-file-dirs-3.cpp` |

### Attempt 1 notes

The exact released `strcpy(root_dir, directory.c_str())` expression compiles as a 16-byte sibling call.

### Attempt 2 notes

Loading the source through a local emits the same sibling call.

### Attempt 3 notes

Loading the destination through a local also emits the same sibling call.

## Outcome

The barrier-dependent wrapper was removed and the original target function was deferred.
