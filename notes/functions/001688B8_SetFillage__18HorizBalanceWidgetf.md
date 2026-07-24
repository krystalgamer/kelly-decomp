# SetFillage__18HorizBalanceWidgetf

- Address: `0x001688B8`
- Size: `0x68` (104 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_balance.cpp`
- Reference source: `KS/SRC/ks/igo_widget_balance.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.8462 | 11.5385 | `candidate.cpp` |
| 2 | different | 22.1154 | 7.6923 | `candidate.cpp` |
| 3 | different | 33.6538 | 15.3846 | `candidate.cpp` |
| 4 | different | 15.625 | 0.0 | `candidate.cpp` |
| 5 | different | 33.6538 | 15.3846 | `candidate.cpp` |

## Outcome

Released horizontal balance fill clamp requires floating-pipeline nops and reordered inline Mask stores; five source candidates could not reproduce it without prohibited assembly.
