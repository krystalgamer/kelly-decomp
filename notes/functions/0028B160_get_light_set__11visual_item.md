# get_light_set__11visual_item

- Address: `0x0028B160`
- Size: `0x68` (104 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.4231 | 57.6923 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact owner offset and entity is-visible/get-light-set virtual slots. Fixed ABI registers matched on attempt 2.

## Outcome

Matched visual item light lookup
