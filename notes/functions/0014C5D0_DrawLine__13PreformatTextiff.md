# DrawLine__13PreformatTextiff

- Address: `0x0014C5D0`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released line lookup and virtual `Render` dispatch use the shared frontend
text hierarchy.

## Outcome

The manual vtable-slot layout was removed; the released helper remains exact.
