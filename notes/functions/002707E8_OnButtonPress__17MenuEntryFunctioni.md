# OnButtonPress__17MenuEntryFunctioni

- Address: `0x002707E8`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/menu.h`
- Reference source: `KS/SRC/ks/menu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline method conditionally invokes the callback stored at offset 0x0c.

## Outcome

The released `MenuEntryFunction::OnButtonPress` implementation matched exactly.
