# OnMenuClose__7Submenu

- Address: `0x00270A68`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/menu.h`
- Reference source: `KS/SRC/ks/menu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released hook clears `parent` at `0x10` then `system` at `0x14`; EE GCC schedules the parent store into the delay slot.

## Outcome

The released `Submenu::OnMenuClose` pointer clears matched exactly on the first attempt.
