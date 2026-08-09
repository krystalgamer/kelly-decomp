# UNDERWATER_ScrollBottom__Fv

- Address: `0x0036E5E0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/underwtr.cpp`
- Reference source: `KS/SRC/ks/underwtr.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released player-count dispatch uses the shared game layout and a local
final-scroll pointer.

## Outcome

The local game layout and compiler barrier were removed.
