# new_box_trigger__15trigger_managerP6entity

- Address: `0x0028D610`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With `ECULL` disabled, the released factory returns `NULL`.

## Outcome

The configuration-reduced `trigger_manager::new_box_trigger` null return matched exactly on the first attempt.
