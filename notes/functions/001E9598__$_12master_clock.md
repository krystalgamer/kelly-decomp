# _$_12master_clock

- Address: `0x001E9598`
- Size: `0x30` (48 bytes)
- Object: `game/files_hwosps2`
- Debug source: `hwosps2/ps2_timer.h`
- Reference source: `KS/SRC/HWOSPS2/ps2_timer.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.3333 | 25.0 | `candidate.cpp` |
| 2 | different | 33.3333 | 25.0 | `candidate.cpp` |
| 3 | different | 33.3333 | 25.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty destructor collapses to a 36-byte sibling delete form.

Two additional native empty-body forms retain the same schedule.

## Outcome

The manual vtable restoration and compiler barrier were removed.
