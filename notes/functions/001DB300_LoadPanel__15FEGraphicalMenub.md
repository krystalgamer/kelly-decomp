# LoadPanel__15FEGraphicalMenub

- Address: `0x001DB300`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 30.5556 | 16.6667 | `candidate.cpp` |
| 2 | different | 31.9444 | 16.6667 | `candidate.cpp` |
| 3 | different | 29.1667 | 16.6667 | `candidate.cpp` |
| 4 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 5 | different | 95.8333 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released inline body and a new shared source-faithful FEMenu/FrontEnd/FEGraphicalMenu hierarchy; the initial secondary-base size and suppressed inline FrontEnd call differed.

### Attempt 2 notes

Attempt 2 aligned FEMenu to the target 0x80-byte secondary-base boundary and made FrontEnd::LoadPanel inline; #pragma interface still suppressed that inline call in the isolated selector.

### Attempt 3 notes

Attempt 3 called the same released panel operation directly, producing all exact object offsets, but GCC inverted the branch and tail-called PanelFile::Load.

### Attempt 4 notes

Attempt 4 added the normalized empty barrier after the conditional to prevent the demonstrated tail call; control flow matched except for return-address restore scheduling.

### Attempt 5 notes

Attempt 5 narrowed the normalized barrier to the PanelFile branch, reproducing every target instruction, but the isolated object retained the unresolved PanelFile::Load relocation and reached only 69/72 exact bytes. The five-attempt cap was reached, so the function is deferred rather than forcing bytes.

## Outcome

Deferred after five source-only attempts; shared released FEMenu declarations remain validated for future functions.
