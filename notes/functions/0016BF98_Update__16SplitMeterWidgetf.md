# Update__16SplitMeterWidgetf

- Address: `0x0016BF98`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Created shared source-faithful SpecialMeter and SplitMeterWidget headers, reused the shared IGOWidget declaration, consolidated the existing SetDisplay selector declaration, rebuilt existing selectors, and used the exact released Update body.

## Outcome

The released split-meter update matches exactly against shared declarations.
