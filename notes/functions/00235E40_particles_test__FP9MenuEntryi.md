# particles_test__FP9MenuEntryi

- Address: `0x00235E40`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released debug callback returns `true`; its PS2 debug-only assignment is absent in this build.

## Outcome

The released `particles_test` success callback matched exactly on the first attempt.
