# destroy_guidance_sys__18physical_interface

- Address: `0x00125B18`
- Size: `0x44` (68 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/physical_interface.cpp`
- Reference source: `KS/SRC/physical_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.5294 | 94.1176 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released delete-and-clear body, but an incomplete `guidance_system` declaration placed its GCC2 vptr at offset zero rather than after `owner` and `flags`.

### Attempt 2 notes

Restored the released `owner` and `flags` members before the virtual destructor; the resulting GCC2 object layout matched exactly.

## Outcome

The released guidance-system delete-and-clear body matches with its exact owner/flags/vptr layout.
