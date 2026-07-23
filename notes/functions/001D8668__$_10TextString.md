# _$_10TextString

- Address: `0x001D8668`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released TextString declaration and generated destructor, including vtable/string offsets, stringx destruction, and deleting-mode behavior. The established non-tail delete pattern matched byte-exactly.

## Outcome

Matched generated TextString destructor
