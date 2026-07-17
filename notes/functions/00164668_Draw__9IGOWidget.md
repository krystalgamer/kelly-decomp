# Draw__9IGOWidget

- Address: `0x00164668`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget.cpp`
- Reference source: `KS/SRC/ks/igo_widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base widget draw hook is intentionally empty. The no-argument virtual
method matched on the first candidate.

## Outcome

The base IGOWidget draw hook is intentionally empty. The first no-argument candidate matched exactly and preserved the byte-identical integrated ROM.
