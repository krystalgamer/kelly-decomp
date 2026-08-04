# _GLOBAL_$I$g_time_dilation

- Address: `0x00146520`
- Size: `0x20` (32 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-frontend-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-frontend-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-frontend-probes-3.cpp` |

## Outcome

Three direct forms collapse the generated initialization thunk to a 12-byte sibling call. The 32-byte target thunk was returned to raw text instead of retaining the manual `extern "C"` wrapper.
