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

The released derived constructor uses the shared trigger hierarchy and native
base construction.

## Outcome

The manual vtable install and symbol wrapper were removed; the released
constructor remains exact.
