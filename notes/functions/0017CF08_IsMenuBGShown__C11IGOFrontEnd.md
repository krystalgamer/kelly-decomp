# IsMenuBGShown__C11IGOFrontEnd

- Address: `0x0017CF08`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released null check and virtual SimpleWidget::IsShown call matched exactly with menuBGWidget at offset 0x584 and the authentic IGOWidget/SimpleWidget virtual hierarchy.

## Outcome

The released menu-background visibility query matched exactly on the first attempt.
