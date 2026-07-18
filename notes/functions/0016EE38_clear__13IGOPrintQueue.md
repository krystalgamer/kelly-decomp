# clear__13IGOPrintQueue

- Address: `0x0016EE38`
- Size: `0x10` (16 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released chained assignment clears `start` at `0xC0`, `end` at `0xC4`, and byte `size` at `0xC8`.

## Outcome

The released `IGOPrintQueue::clear` queue-state clears matched exactly on the first attempt.
