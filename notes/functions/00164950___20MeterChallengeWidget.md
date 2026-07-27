# __20MeterChallengeWidget

- Address: `0x00164950`
- Size: `0x10C` (268 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_meterchallenge.cpp`
- Reference source: `KS/SRC/ks/igo_widget_meterchallenge.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Extracted `MeterChallengeWidget::MeterChallengeWidget` verbatim from the released source.
- Included only the declarations needed to make the constructor candidate self-contained, including the base widget, text, font enums, color, and allocation interface.
- Tested exactly once with `env/bin/python tools/function_test.py test 0x00164950 --candidate tmp/functions/00164950___20MeterChallengeWidget/candidate.cpp`.
- Result: `compile_failed` (score 0.0). The candidate omitted a `NULL` declaration and declared the debug allocation overload with one fewer placement argument than emitted by `NEW`.
- No variants or diff chasing were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/igo_widget_meterchallenge.cpp:8-18` — exact released constructor body.
- `kelly-slaters-pro-surfer/KS/SRC/ks/igo_widget_meterchallenge.h:9-38` — exact inheritance, fields, and constructor declaration.
- `tmp/functions/00164950___20MeterChallengeWidget/attempt-1/compiler.stderr:1-9` — compile failure details.
- `tmp/functions/00164950___20MeterChallengeWidget/attempt-1/result.json` — recorded attempt result.

## Outcome

The exact released meter-challenge-widget constructor failed the isolated compile; the sole attempt scored 0%.
