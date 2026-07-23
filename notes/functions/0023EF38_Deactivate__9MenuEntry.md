# Deactivate__9MenuEntry

- Address: `0x0023EF38`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released MenuEntry::Deactivate body, MenuEntry flags, IsActive/SetFlag helpers, MENTRY_ACTIVE constant, and virtual OnDeactivate ordering. The released source matched byte-exactly.

## Outcome

Matched released MenuEntry::Deactivate body
