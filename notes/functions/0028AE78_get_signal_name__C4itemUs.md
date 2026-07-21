# get_signal_name__C4itemUs

- Address: `0x0028AE78`
- Size: `0x44` (68 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.7222 | 22.2222 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Attempt one used the exact released spelling. After its diff showed the compiler selecting the opposite fallthrough, expressing the equivalent local-signal case first reproduced the released branch layout exactly.

## Outcome

The item signal-name lookup matches its inherited range and local signal table behavior.
