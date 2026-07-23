# __tf16StoredConfigData

- Address: `0x002B8B48`
- Size: `0x54` (84 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/GameData.h`
- Reference source: `KS/SRC/ks/GameData.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.619 | 90.4762 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released StoredConfigData private singleton inheritance and generated class RTTI pattern. Bound the exact type object, base RTTI function, negative-low name/base descriptors, and __rtti_class helper; attempt 2 matched byte-exactly.

## Outcome

Matched generated StoredConfigData RTTI
