# GetElementText__4MenuiPci

- Address: `0x0023E6C8`
- Size: `0x68` (104 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.1538 | 84.6154 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact bounds/null checks, MenuEntry vtable layout, MenuText slot, and empty-string fallback. Fixed vtable and callee registers matched on attempt 2.

## Outcome

Matched menu element text retrieval
