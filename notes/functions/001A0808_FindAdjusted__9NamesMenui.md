# FindAdjusted__9NamesMenui

- Address: `0x001A0808`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The Xbox-only index adjustment is absent on PS2, so the static helper returns
its argument unchanged. The first candidate matched the register move.

## Outcome

The Xbox-only card-index adjustment is absent on PS2, so the static helper returns its argument unchanged. The first candidate matched exactly and preserved the full ROM checksum.
