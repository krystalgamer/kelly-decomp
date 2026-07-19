# purge_entity_cache__12entity_maker

- Address: `0x0030B0F0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places `entity_cache` at offset four and preserves the released purge delegation.

## Outcome

The released `entity_maker::purge_entity_cache` wrapper matched exactly on the first attempt.
