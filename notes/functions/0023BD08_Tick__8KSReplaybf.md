# Tick__8KSReplaybf

- Address: `0x0023BD08`
- Size: `0x100` (256 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the released Tick definition verbatim from kelly-slaters-pro-surfer/KS/SRC/ks/ksreplay.cpp:713-749, with compile-only declarations based on ksreplay.h:100-188. The sole test compile failed because NULL was undeclared; score 0.0. No retry was made.

## Outcome

The exact released replay Tick definition failed the isolated compile because NULL was undeclared in the extracted declaration context; the sole attempt scored 0%.
