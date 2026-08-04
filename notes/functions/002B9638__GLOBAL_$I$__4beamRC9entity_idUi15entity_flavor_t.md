# _GLOBAL_$I$__4beamRC9entity_idUi15entity_flavor_t

- Address: `0x002B9638`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/vsplit.h`
- Reference source: `KS/SRC/vsplit.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-beam-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-beam-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-beam-probes-3.cpp` |

## Outcome

Three direct forms collapse the generated initialization thunk to a 12-byte sibling call. The manual generated-symbol wrapper was removed.
