# push__t10fifo_queue1ZUiRCUi

- Address: `0x0038EFD0`
- Size: `0x6C` (108 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.8214 | 14.2857 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read all queue offsets, signed-short wrap logic, element store, and count return. Expressing the room path as an explicit branch matched on attempt 2.

## Outcome

Matched FIFO queue push
