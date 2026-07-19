# unlockCheat__15GlobalDataClassi

- Address: `0x002F0000`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.875 | 87.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate used the effective global address without the `%hi` carry required by its negative low half.

### Attempt 2 notes

The reconstructed eight-byte cheat entries preserve both persistent and session locked-state stores.

## Outcome

The released cheat unlock setter matched exactly.
