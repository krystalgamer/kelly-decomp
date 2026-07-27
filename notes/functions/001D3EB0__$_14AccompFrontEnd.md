# _$_14AccompFrontEnd

- Address: `0x001D3EB0`
- Size: `0x100` (256 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/AccompFrontEnd.cpp`
- Reference source: `KS/SRC/ks/AccompFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the released definition cited at kelly-slaters-pro-surfer/KS/SRC/ks/AccompFrontEnd.cpp:3-12; kelly-slaters-pro-surfer/KS/SRC/ks/AccompFrontEnd.cpp:44-53; kelly-slaters-pro-surfer/KS/SRC/ks/AccompFrontEnd.h:7-52. The single exact-source test returned `compile_failed` with score 0.0000. No variant or later attempt was made.

## Outcome

The exact released AccompFrontEnd destructor failed the isolated compile because its released headers were unavailable; the sole attempt scored 0%.
