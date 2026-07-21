# ExitLevel__FP9MenuEntryi

- Address: `0x00236980`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released cross-button check, menu closure, singleton game lookup, end-level call, and true return matched exactly with recovered globals and app layout.

## Outcome

The released exit-level callback exactly matches its cross-button guard, menu closure, game lookup, and end-level call.
