# isSurferPersUnlocked__C15GlobalDataClassi

- Address: `0x002EFDA8`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.0769 | 92.3077 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released personality flag or all-personality cheat expression with the recovered 0x78-byte surfer records. All instructions matched, but the absolute cheat alias encoded HI16 0x42 instead of the target relocation-adjusted 0x43.

### Attempt 2 notes

The released personality flag/cheat expression matched exactly with 0x78-byte SurferData records and the flag at object offset 0xf0. The cheat alias is HI16-adjusted so its signed LO16 reaches the real 0x0042bdb4 global.

## Outcome

The released surfer personality unlock query matched exactly.
