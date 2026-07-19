# GetWidth__11FEMenuEntry

- Address: `0x001DA830`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places the text object pointer at offset 0x24; retaining the float result across a barrier preserves the call wrapper.

## Outcome

The inline `FEMenuEntry::GetWidth` forwarding accessor matched exactly on the first attempt.
