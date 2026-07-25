# _$_14BurstTrickText

- Address: `0x001D8ED8`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 1.087 | 0.0 | `candidate.cpp` |
| 2 | different | 1.087 | 0.0 | `candidate.cpp` |
| 3 | different | 1.087 | 0.0 | `candidate.cpp` |
| 4 | different | 17.3913 | 0.0 | `candidate.cpp` |
| 5 | different | 34.9057 | 16.9811 | `candidate.cpp` |

### Attempt 5 notes

Reconstructed the exact released `BurstTrickText : TrickBoxText : RandomText : TextString` hierarchy and full StringList storage. The compiler would not fuse the generated intermediate/member destructors as in the target; an explicit shared-layout cleanup emitted the correct operations but a different loop/register schedule after five candidates, so all shared experiments were reverted.

## Outcome

Deferred the generated BurstTrickText destructor after five source-level attempts could not reproduce member-destructor fusion and scheduling.
