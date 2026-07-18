# set_camera_priority__9vm_threadf

- Address: `0x00356640`
- Size: `0x8` (8 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes `camera_priority` at offset `0x38`.

## Outcome

The released `vm_thread::set_camera_priority` setter matched exactly on the first attempt.
