# _$_16StoredConfigData

- Address: `0x002B8B18`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/GameData.h`
- Reference source: `KS/SRC/ks/GameData.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.6667 | 16.6667 | `candidate.cpp` |
| 2 | different | 16.6667 | 16.6667 | `candidate.cpp` |
| 3 | different | 16.6667 | 16.6667 | `candidate.cpp` |

### Attempt 1 notes

Three native implicit-destructor forms collapse to a 20-byte tail call to the
`singleton` destructor.

## Outcome

The target's direct-delete frame required a manual singleton-vtable write and
compiler barrier. Those matching-only constructs were removed.
