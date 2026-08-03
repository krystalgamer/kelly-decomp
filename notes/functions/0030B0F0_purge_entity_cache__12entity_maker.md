# purge_entity_cache__12entity_maker

- Address: `0x0030B0F0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.5714 | 0.0 | `size28-block2-probes-1.cpp` |
| 2 | different | 3.5714 | 0.0 | `size28-block2-probes-2.cpp` |
| 3 | different | 3.5714 | 0.0 | `size28-block2-probes-3.cpp` |

## Outcome

All three shared-layout forms tail-call `entity_pool_set::purge` with the
member adjustment in the delay slot. The target retains a 28-byte frame, so
the artificial wrapper was removed.
