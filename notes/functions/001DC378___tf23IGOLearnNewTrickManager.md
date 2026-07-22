# __tf23IGOLearnNewTrickManager

- Address: `0x001DC378`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igolearn_new_trickmanager.h`
- Reference source: `KS/SRC/ks/igolearn_new_trickmanager.h`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 88.75 | 90.0 | `candidate.cpp` |
| 3 | different | 96.25 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The immutable EventRecipient RTTI context was inspected. Initial self-contained candidate setup did not emit the requested RTTI symbol because the candidate source had not yet been populated.

### Attempt 2 notes

Implemented the immutable-style lazy RTTI body with EventRecipient base RTTI and __rtti_si. The candidate emitted the full 80-byte function but retained an unresolved relocation for the base RTTI call, producing 71/80 matching bytes.

### Attempt 3 notes

Used absolute typeinfo and base-type symbols to reproduce the target instruction sequence. The candidate matched all instructions and 77/80 bytes; the remaining difference was the unresolved __tf14EventRecipient relocation. Exactly three Luna attempts were exhausted; no attempt 4 was run.

## Outcome

Luna attempts 1-3 reproduced the IGOLearnNewTrickManager RTTI body through the immutable EventRecipient RTTI context and __rtti_si, but the candidate remained 3 bytes different because the base RTTI call retained an unresolved relocation. No fourth attempt was run.
