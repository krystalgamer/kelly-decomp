# add_object__5beachP12beach_object

- Address: `0x001E9C10`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/beach.cpp`
- Reference source: `KS/SRC/ks/beach.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released list insertion stores the old head into `object->next` and replaces the head at beach offset `0x2C4`.

## Outcome

The released `beach::add_object` linked-list insertion matched exactly on the first attempt.
