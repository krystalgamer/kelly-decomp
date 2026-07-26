# Init__15IconCountWidgetR9PanelFileP4FontT2RC7color32T4

- Address: `0x0016D6D0`
- Size: `0xDC` (220 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_iconcount.cpp`
- Reference source: `KS/SRC/ks/igo_widget_iconcount.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.6364 | 100.0 | `candidate-round1.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-round2.cpp` |

### Attempt 1 notes

Used the exact released IconCountWidget::Init body with one consolidated declaration set. All 55 instructions matched semantically; only the three address bytes for the relocatable "iconmeter" literal differed.

### Attempt 2 notes

Replaced the released literal expression with an equivalent named constant at 0x004C1460 while retaining the released body and declarations. The candidate matched all 220 bytes and all 55 instructions.

## Outcome

Matched the released IconCountWidget initialization after consolidating the exact widget, panel, text, font, and color declarations and binding the iconmeter panel name to its target address.
