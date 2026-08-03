# ett_free__11ett_managerPv

- Address: `0x00115DB0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `native_ett_free_probe_1.cpp` |
| 2 | different | 0.0 | 0.0 | `native_ett_free_probe_2.cpp` |
| 3 | different | 0.0 | 0.0 | `native_ett_free_probe_3.cpp` |

## Outcome

The released direct call, an inline native helper, and a void return-expression
form all compile as eight-byte sibling calls. The target preserves a 28-byte
call frame, so the former barrier-dependent match was removed and the function
was deferred.
