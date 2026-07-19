# OnUnactivate__10DialogMenuP6FEMenu

- Address: `0x001DCDF8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.h`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The unused menu parameter is preserved and the released inline body delegates to `TurnPQ(false)`.

## Outcome

The inline `DialogMenu::OnUnactivate` wrapper matched exactly on the first attempt.

## Matching-only annotation

`KELLY_DECOMP_COMPILER_BARRIER()` is not recovered original source and emits
no instruction. The source-faithful wrapper was otherwise eligible for EE GCC
sibling-call or scheduling changes; the annotation preserves the target's
normal call/return ordering.
