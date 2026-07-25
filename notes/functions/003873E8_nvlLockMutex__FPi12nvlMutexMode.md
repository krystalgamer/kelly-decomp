# nvlLockMutex__FPi12nvlMutexMode

- Address: `0x003873E8`
- Size: `0x98` (152 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.3684 | 89.4737 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Matched released NVL mutex locking with exact assertion strings and semaphore control flow.

## Outcome

Matched NVL mutex lock
