# Close__4Menub

- Address: `0x0023E470`
- Size: `0x6C` (108 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.0645 | 48.3871 | `candidate.cpp` |
| 2 | different | 94.4444 | 92.5926 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the open/control/vtable fields, Closing and OnClose calls, and parent activation reset. Hoisting the control pointer matched the Closing delay-slot store on attempt 3.

## Outcome

Matched menu close
