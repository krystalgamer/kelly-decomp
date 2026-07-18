# drawMenu__16MCDetectFrontEnd

- Address: `0x001A4260`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MCDetectFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MCDetectFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The PS2 path always displays the memory-card menu, so `drawMenu` returns
`true`. The constant result matched on the first candidate.

## Outcome

The PS2 path always displays the memory-card menu, so drawMenu returns true. The first candidate matched exactly and preserved the byte-identical integrated ROM.
