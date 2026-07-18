# refresh__6signal

- Address: `0x0034C530`
- Size: `0x18` (24 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method clears the low two signal flags at offset `0x4`.

## Outcome

The released `signal::refresh` flag mask matched exactly on the first attempt.
