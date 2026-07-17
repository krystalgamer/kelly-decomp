# process_movement__13ai_locomotionf

- Address: `0x00112DF0`
- Size: `0x8` (8 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.h`
- Reference source: `KS/SRC/ai_locomotion.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base locomotion implementation immediately reports completion. A
`float` time parameter and `return true` matched on the first candidate.

## Outcome

The base locomotion process_movement implementation immediately returns true. The first candidate matched exactly and kept the integrated ROM checksum byte-identical.
