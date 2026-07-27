# Init__18SpecialMeterWidgetR9PanelFileP12SpecialMeter

- Address: `0x00166B50`
- Size: `0xF8` (248 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_specialmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_specialmeter.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.6774 | 82.2581 | `candidate.cpp` |

### Attempt 1 notes

Exact released `SpecialMeterWidget::Init` body with the authentic `PanelQuad` 0x194 vtable layout, widget hierarchy, panel lookup strings, and meter API. It emitted the exact 248-byte calls and stores; only prologue and cross-call scheduling differ, with pointer-result stores moved out of the following calls' delay slots.

## Outcome

Exact released special-meter initialization differed only in call-delay scheduling.
