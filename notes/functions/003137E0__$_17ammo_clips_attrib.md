# _$_17ammo_clips_attrib

- Address: `0x003137E0`
- Size: `0x30` (48 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/character_soft_attribs.h`
- Reference source: `KS/SRC/character_soft_attribs.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.25 | 0.0 | `candidate.cpp` |
| 2 | different | 6.25 | 0.0 | `candidate.cpp` |
| 3 | different | 6.25 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Three native empty-destructor forms collapse to a 20-byte bounded-attribute
tail call.

## Outcome

The target's direct-delete frame required manual base-vtable restoration and a
compiler barrier. Those matching-only constructs were removed.
