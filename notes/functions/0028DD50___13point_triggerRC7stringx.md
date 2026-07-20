# __13point_triggerRC7stringx

- Address: `0x0028DD50`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released derived constructor matched exactly through trigger base construction and the point-trigger vtable install at offset 0x8. The adjusted vtable alias reproduces the HI16 carry for the real 0x004eb0a0 table.

## Outcome

The released point-trigger constructor matched exactly on the first attempt.
