# _$_16SplitScoreWidget

- Address: `0x0016C248`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitscore.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitscore.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.0 | 72.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released destructor, IGOWidget inheritance, scoreText offset, derived vtable, and virtual delete path. Preventing the base tail call matched on attempt 2.

## Outcome

Matched split score widget destructor
