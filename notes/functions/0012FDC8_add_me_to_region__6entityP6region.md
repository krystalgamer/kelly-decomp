# add_me_to_region__6entityP6region

- Address: `0x0012FDC8`
- Size: `0x24` (36 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.1111 | 0.0 | `size36-first-probes-1.cpp` |
| 2 | different | 11.1111 | 0.0 | `size36-first-probes-2.cpp` |
| 3 | different | 11.1111 | 0.0 | `size36-first-probes-3.cpp` |

## Outcome

All three shared-declaration forms swap `this` and the region argument, then tail-call `region::add` in 16 bytes. The target retains a 36-byte frame, so the wrapper was deferred.
