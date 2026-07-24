# get_device_from_map__C9input_mgr11device_id_t

- Address: `0x00343AD8`
- Size: `0x78` (120 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.4848 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released device vector scan matched after preserving the repeated iterator dereference instead of retaining a device local across the virtual get_id call.

## Outcome

The released input device lookup matched exactly on the second attempt.
