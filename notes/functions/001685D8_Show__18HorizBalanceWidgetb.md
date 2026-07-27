# Show__18HorizBalanceWidgetb

- Address: `0x001685D8`
- Size: `0x108` (264 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_balance.cpp`
- Reference source: `KS/SRC/ks/igo_widget_balance.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 was invalid: candidate.cpp remained the generated placeholder because candidate creation invoked unavailable `python` before the single required function_test call. function_test ran exactly once and reported symbol_missing with score 0.0. No retry or variant was made, and the existing attempt was not altered. Released body citation: kelly-slaters-pro-surfer/KS/SRC/ks/igo_widget_balance.cpp:122-134; declaration citation: kelly-slaters-pro-surfer/KS/SRC/ks/igo_widget_balance.h:9-38.

## Outcome

The sole recorded first-pass test submitted the prepared placeholder after candidate generation failed, so no target symbol was emitted; no retry was made.
