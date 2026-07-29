# switch_anims__16generic_anim_ice

- Address: `0x0020B9E8`
- Size: `0x230` (560 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 108 lane B4

Exact released body tested once for `0x0020B9E8 switch_anims__16generic_anim_ice`.
Result `compile_failed`, score 0.0000%; the minimal declaration omitted the
released `stringx(const char *, int = -1)` conversion needed by `play_anim`.
No retry, variant, follow-up, diff chase, build, finalize, integration, git
mutation, or tracked edit.

## Outcome

The exact released ice-animation switch candidate failed to compile with its minimal declarations; no alternate source was attempted.
