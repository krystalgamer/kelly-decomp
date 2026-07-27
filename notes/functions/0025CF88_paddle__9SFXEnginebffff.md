# paddle__9SFXEnginebffff

- Address: `0x0025CF88`
- Size: `0x10C` (268 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/SFXEngine.cpp`
- Reference source: `KS/SRC/ks/SFXEngine.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.8806 | 80.597 | `candidate.cpp` |

### Attempt 1 notes

Exact released `SFXEngine::paddle` body was tested once with minimal self-contained declarations for the NSL API, developer options, and the released `SFXEngine::paused` layout. It compiled at the exact 268-byte target size but differed: 198/268 bytes and 54/67 instructions matched (73.8806% byte score, 80.597% instruction score). No variants or diff chasing were performed.

## Outcome

The exact released paddle sound-effect definition differed from the target; the sole attempt scored 73.8806%.
