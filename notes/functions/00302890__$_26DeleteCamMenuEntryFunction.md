# _$_26DeleteCamMenuEntryFunction

- Address: `0x00302890`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.h`
- Reference source: `KS/SRC/ks/camera_tool.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.25 | 0.0 | `candidate.cpp` |
| 2 | different | 6.25 | 0.0 | `candidate.cpp` |
| 3 | different | 6.25 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Three native empty-destructor forms collapse to a 20-byte base-destructor tail
call.

## Outcome

The target's direct-delete frame required manual base-vtable restoration and a
compiler barrier. Those matching-only constructs were removed.
