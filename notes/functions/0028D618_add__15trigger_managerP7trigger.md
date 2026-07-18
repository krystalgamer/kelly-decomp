# add__15trigger_managerP7trigger

- Address: `0x0028D618`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released list insertion stores the old head into trigger offset `0x18` and replaces the manager head at `0x10`.

## Outcome

The released `trigger_manager::add` linked-list insertion matched exactly on the first attempt.
