# SetDisplay__20MeterChallengeWidgetb

- Address: `0x00164AC8`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_meterchallenge.cpp`
- Reference source: `KS/SRC/ks/igo_widget_meterchallenge.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base `SetDisplay` call and inherited display assignment use the
shared IGO widget hierarchy.

## Outcome

The local base-class layout was removed; the released setter remains exact.
