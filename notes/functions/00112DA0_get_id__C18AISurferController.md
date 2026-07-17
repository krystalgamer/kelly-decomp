# get_id__C18AISurferController

- Address: `0x00112DA0`
- Size: `0x8` (8 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.h`
- Reference source: `KS/SRC/AIController.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The method returns the inherited controller `device_id`, which is loaded from
offset zero. Modeling that field as the first word matched on the first try.

## Outcome

The method returns the controller device_id stored at object offset zero. A minimal layout with that first word matched on the first attempt and retained the exact integrated ROM checksum.
