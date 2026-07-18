# new_line__10ini_parserPc

- Address: `0x0030D348`
- Size: `0xC` (12 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/ini_parser.cpp`
- Reference source: `KS/SRC/ini_parser.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method clears `line_pos` at `0x200` and stores `current_line` at `0x204`; scheduling moves the clear into the delay slot.

## Outcome

The released `ini_parser::new_line` state updates matched exactly on the first attempt.
