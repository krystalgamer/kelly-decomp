# OnCross__11FEDebugMenui

- Address: `0x001DE2B0`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.h`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC menu vtable layout preserves the released virtual forwarding of `highlighted->entry_num` through slot 0x128.

## Outcome

The released `OnCross__11FEDebugMenui` selector matched exactly on the first attempt.
