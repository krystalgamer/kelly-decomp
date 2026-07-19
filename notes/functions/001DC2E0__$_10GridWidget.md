# _$_10GridWidget

- Address: `0x001DC2E0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_grid.h`
- Reference source: `KS/SRC/ks/igo_widget_grid.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reproduces the generated destructor's non-tail call to `IGOWidget::~IGOWidget`.

## Outcome

`GridWidget`'s generated destructor wrapper matched exactly on the first attempt.

## Matching-only annotation

`KELLY_DECOMP_COMPILER_BARRIER()` emits no target instruction. It keeps EE GCC from replacing the required normal call/return wrapper described above with a sibling or tail call.
