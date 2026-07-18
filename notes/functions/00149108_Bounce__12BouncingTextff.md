# Bounce__12BouncingTextff

- Address: `0x00149108`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method stores `targetScale` at `0x50`, computes `speed` at `0x54`, and clears inherited `scale` at `0x30`.

## Outcome

The released `BouncingText::Bounce` stores and division matched exactly on the first attempt.
