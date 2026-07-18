# MenuText__9MenuEntryPci

- Address: `0x00270540`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/menu.h`
- Reference source: `KS/SRC/ks/menu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base helper null-terminates the buffer only when `length > 0`, then returns zero.

## Outcome

The released branch-based `MenuEntry::MenuText` helper matched exactly on the first attempt.
