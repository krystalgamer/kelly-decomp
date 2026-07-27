# read__14region_triggerR10chunk_file

- Address: `0x0028E7F8`
- Size: `0xF8` (248 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.1905 | 14.0625 | `candidate.cpp` |

### Attempt 1 notes

Exact released `region_trigger::read` body with the authentic string buffer equality helper, trigger hierarchy, chunk label, serial input, and by-value `force_region` call. The 112-byte frame and behavior reproduce, but EE GCC generated an indexed 64-bit string comparison and different loop layout instead of the target's pointer-increment form, yielding 252 versus 248 bytes.

## Outcome

Exact released region trigger reader differed in inlined string comparison loop shape.
