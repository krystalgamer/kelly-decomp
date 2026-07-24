# clear_links__6signal

- Address: `0x0034C278`
- Size: `0x60` (96 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.7917 | 0.0 | `candidate.cpp` |
| 2 | different | 19.7917 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read signal::clear_links, signal outputs offset, list destruction, allocator free-list layout, and delete behavior. The expanded released delete path matched on attempt 3.

## Outcome

Matched signal link cleanup
