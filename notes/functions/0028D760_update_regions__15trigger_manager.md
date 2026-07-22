# update_regions__15trigger_manager

- Address: `0x0028D760`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `trigger.cpp:117-120` loop and created a shared
released signaller/trigger/manager declaration.  The inherited virtual order
and original list/next offsets reproduce the shipped virtual dispatch.

## Outcome

Matched all trigger-region update iteration byte-for-byte.
