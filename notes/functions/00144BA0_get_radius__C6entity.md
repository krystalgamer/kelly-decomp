# get_radius__C6entity

- Address: `0x00144BA0`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The getter loads the same radius field at offset `0x90`. Returning the float
matched the target `lwc1` delay-slot instruction.

## Outcome

The entity radius getter loads the float at object offset 0x90. The first candidate matched exactly and retained the full target ROM checksum after integration.
