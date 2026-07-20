# pop_PC__9vm_thread

- Address: `0x003561C8`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released vector empty/back/pop sequence matched exactly with PC at offset 0x1c and the vector begin/end pointers at 0x20/0x24.

## Outcome

The released vm_thread PC pop matched exactly on the first attempt.
