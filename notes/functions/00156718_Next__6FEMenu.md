# Next__6FEMenu

- Address: `0x00156718`
- Size: `0x178` (376 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released-source first-pass attempt using the body from `kelly-slaters-pro-surfer/KS/SRC/ks/FEMenu.cpp:378-417` and minimal declarations/type layout derived from `kelly-slaters-pro-surfer/KS/SRC/ks/FEMenu.h:56-135,146-159,161-272`.

Canonical result: `compile_failed`, score `0.0`. The compiler reported `assert.h: No such file or directory` at candidate line 1. Per the one-attempt lane constraint, no retry, declaration variant, or assembly/diff chase was performed.

## Outcome

Exact released-source first pass for menu next selection did not match.
