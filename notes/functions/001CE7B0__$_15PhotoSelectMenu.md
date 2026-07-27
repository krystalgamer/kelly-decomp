# _$_15PhotoSelectMenu

- Address: `0x001CE7B0`
- Size: `0x138` (312 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.0128 | 1.2821 | `candidate.cpp` |

### Attempt 1 notes

# Released-source first pass A2 notes — _$_15PhotoSelectMenu

- Used the exact released `PhotoSelectMenu::~PhotoSelectMenu` body (`delete title;`) with minimal declarations preserving the released `FEMultiMenu` base, member order, three `PhotoWidget` objects, and virtual destructors.
- The candidate is non-placeholder and was tested exactly once with `env/bin/python tools/function_test.py test 0x001CE7B0 --candidate 'tmp/functions/001CE7B0__$_15PhotoSelectMenu/candidate.cpp'`.
- Result: `different`; byte score 8.0128% (25/312), instruction score 1.2821% (1/78), candidate size 160 versus target 312.
- No source, candidate-prefix, or shared proposal fields were emitted because those fields are matched-only.
- No variants, diff chasing, build, finalize, integrate, tracked writes, tool edits, subagents, commit, or push.

Citations: released `PhotoFrontEnd.cpp:233-238`, `PhotoFrontEnd.h:45-78`, `igo_widget_photo.h:20-67`, `FEMenu.h:498-527`, and attempt-1 `result.json`.

## Outcome

The exact released PhotoSelectMenu destructor differed from the target; the sole attempt scored 8.0128%.
