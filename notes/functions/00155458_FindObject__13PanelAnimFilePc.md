# FindObject__13PanelAnimFilePc

- Address: `0x00155458`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.cpp`
- Reference source: `KS/SRC/ks/FEAnim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `find_object_candidate.cpp` |

### Attempt 1 notes

The released lookup returns null without a root animation and otherwise delegates to `PanelAnim::FindObject`.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `PanelAnimFile::FindObject` wrapper matched exactly.
