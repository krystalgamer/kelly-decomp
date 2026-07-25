# _$_12TrickBoxText

- Address: `0x001D8C88`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.6739 | 9.0909 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 14.6739 | 9.0909 | `candidate.cpp` |
| 5 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 5 notes

Reconstructed the exact released `TrickBoxText : RandomText : TextString` hierarchy and source-faithful `StringList` layout. The compiler would not inline the generated StringList and RandomText destructor chain as in the target, while the final explicit shared-layout cleanup could not retain the local destructor symbol because of the prior class declaration; all shared experiments were reverted.

## Outcome

Deferred the generated TrickBoxText destructor after five source-level attempts could not reproduce member-destructor fusion and symbol emission.
