# initialize__4item

- Address: `0x0028A108`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The active released initialization body invokes `spawn_item_script`; a barrier preserves the wrapper.

## Outcome

The released `item::initialize` wrapper matched exactly on the first attempt.
