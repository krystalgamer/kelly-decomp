# unmakeRand__12TrickBoxText

- Address: `0x001D8DF8`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline body clears the inherited `isRand` flag at offset `0x50`.

## Outcome

The released `TrickBoxText::unmakeRand` bool clear matched exactly on the first attempt.
