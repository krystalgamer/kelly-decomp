# _$_11storage_mgr

- Address: `0x001E2CB8`
- Size: `0x68` (104 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_storage.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_storage.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.1667 | 46.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released vtable transitions, shutdown diagnostic, singleton initialization flag, and deleting-destructor path. Correct negative-low symbol encodings and a dead-output barrier matched on attempt 2.

## Outcome

Matched storage manager destructor
