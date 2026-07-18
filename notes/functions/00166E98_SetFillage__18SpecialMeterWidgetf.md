# SetFillage__18SpecialMeterWidgetf

- Address: `0x00166E98`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_specialmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_specialmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method calls inline `Mask`, storing amount at quad offset `0x10` and type `1` at `0x14` through the pointer at widget offset `0x10`.

## Outcome

The released `SpecialMeterWidget::SetFillage` nested stores matched exactly on the first attempt.
