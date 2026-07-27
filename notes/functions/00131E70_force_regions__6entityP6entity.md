# force_regions__6entityP6entity

- Address: `0x00131E70`
- Size: `0xFC` (252 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.4844 | 10.9375 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue was clean `pending` with zero attempts; no pre-existing address scratch was present.
- Used the released `entity::force_regions` body verbatim from `entity.cpp:2704-2712`.
- Used authentic released `region_node_pset` iterator semantics and entity region/virtual declarations, narrowed around the established shared entity layout and prior matched `unforce_regions` work.
- Result: **different** — byte score 46.4844%, instruction score 10.9375%; candidate size 256 vs target 252. No second attempt was made.

## Outcome

Exact released entity force_regions source differed from the target; preserved attempt 1 for the later Sol pass.
