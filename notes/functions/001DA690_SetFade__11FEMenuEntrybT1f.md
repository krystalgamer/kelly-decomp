# SetFade__11FEMenuEntrybT1f

- Address: `0x001DA690`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The method declaration emitted `bbf` rather than the target repeated-type `bT1f` mangling; a symbol-preserving alias is required.

### Attempt 2 notes

A symbol-preserving alias and minimal text/vtable layout preserve the released fade signature plus its virtual adjustment/function slots.

## Outcome

The released `FEMenuEntry::SetFade` wrapper matched exactly.
