# OnClose__4Menub

- Address: `0x0023EB70`
- Size: `0xA4` (164 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.3333 | 55.5556 | `candidate.cpp` |
| 2 | different | 93.2927 | 82.9268 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released entry close loop and parent reopen path matched after preserving the count in the target register and preventing a tail call on Sol attempt three.

## Outcome

Matched menu entry closing and optional parent-menu reopening.
