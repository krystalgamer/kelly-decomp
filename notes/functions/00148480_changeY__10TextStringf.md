# changeY__10TextStringf

- Address: `0x00148480`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method stores Y and passes an uninitialized local X reference with it to the coordinate adjuster.
Binding the released template-instantiation symbol directly preserves the original call sequence without a compiler barrier.

## Outcome

The released `TextString::changeY` wrapper matched exactly.
