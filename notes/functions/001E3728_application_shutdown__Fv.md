# application_shutdown__Fv

- Address: `0x001E3728`
- Size: `0x88` (136 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.3824 | 8.8235 | `candidate.cpp` |
| 2 | different | 82.3529 | 70.5882 | `candidate.cpp` |
| 3 | different | 97.7941 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released application shutdown matched after correcting singleton virtual-destructor slots and exact os_alloc_shutdown linkage.

## Outcome

The released application shutdown matched exactly on the fourth attempt.
