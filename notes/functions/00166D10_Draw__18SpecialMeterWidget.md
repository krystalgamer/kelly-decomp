# Draw__18SpecialMeterWidget

- Address: `0x00166D10`
- Size: `0x188` (392 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_specialmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_specialmeter.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.902 | 13.7255 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Result: **different**
- Byte score: **29.902%**
- Instruction score: **13.7255%**
- Candidate size: **408 bytes**; target size: **392 bytes**
- Used the exact released `SpecialMeterWidget::Draw` body with minimal faithful ABI/layout declarations.
- The initial released-header include failed because isolated compilation only searches `include/` and `src/`; this was repaired as identical-body infrastructure before the single canonical attempt.
- No variants, disassembly comparison, diff chasing, attempts 2–5, build, finalization, integration, commit, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/igo_widget_specialmeter.cpp:82-120`
- `kelly-slaters-pro-surfer/KS/SRC/ks/igo_widget_specialmeter.h:10-44`
- `kelly-slaters-pro-surfer/KS/SRC/ks/igo_widget.h:7-25`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:427-491`
- `tmp/functions/00166D10_Draw__18SpecialMeterWidget/attempt-1/result.json`
- `tmp/source_first/00166D10/infrastructure-include-failure.stderr`

## Outcome

The exact released special-meter draw differed at 29.9020% byte score; no source variant was attempted.
