# copy_instance_data__14morphable_itemRC14morphable_item

- Address: `0x0028BD28`
- Size: `0x15C` (348 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.6437 | 18.3908 | `candidate.cpp` |

### Attempt 1 notes

Exact released body with minimal local declarations for `morphable_item`,
`morphable_item_range`, its three-pointer vector, `stringx`, the visibility
vtable slot, allocation, and the vector growth helper. The body is
non-placeholder and preserves the released inline `make_instance` path.

The candidate differs at 37.6437% byte score / 18.3908% instruction score.
The target uses a 192-byte frame and aggressively inlines the released range
constructor/copy/vector insertion sequence; this minimal declaration context
emits a 296-byte function versus the target's 348 bytes.

## Outcome

The exact released morphable-item instance copy differed from the target; the sole attempt scored 37.6437%.
