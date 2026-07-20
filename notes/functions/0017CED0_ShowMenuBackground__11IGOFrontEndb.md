# ShowMenuBackground__11IGOFrontEndb

- Address: `0x0017CED0`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released menu-background null guard and virtual Show dispatch matched exactly with `menuBGWidget` at offset 0x584 and Show at virtual slot 0x3c. The source's unused run-state debug local emits no instructions.

## Outcome

The released IGO menu-background display helper matched exactly on the first attempt.
