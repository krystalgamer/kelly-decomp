# __12SpecialMeter

- Address: `0x00250C20`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released SpecialMeter constructor, EventRecipient base, vtable and all initialized field offsets/defaults. The source-faithful base call and stores matched byte-exactly.

## Outcome

Matched released SpecialMeter constructor
