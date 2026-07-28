# ChangeBtn__9HelpbarFEibG7stringx

- Address: `0x001BDB10`
- Size: `0x19C` (412 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# First pass wave72 A2 — ChangeBtn__9HelpbarFEibG7stringx

- No pre-existing attempt was present for `0x001BDB10`.
- Copied the exact released `HelpbarFE::ChangeBtn` body and supplied minimal
  standalone declarations.
- Tested exactly once with
  `env/bin/python tools/function_test.py test 0x001BDB10 --candidate tmp/source_first/001BDB10/candidate.cpp`.
- Result: `compile_failed`; score 0.0. The declaration omitted the released
  `stringx(const char *, int = -1)` conversion needed by `changeText("")`.
- The failed attempt remains preserved unchanged under
  `tmp/functions/001BDB10_ChangeBtn__9HelpbarFEibG7stringx/attempt-1/`.
- No retry, variant, diff chase, finalization, integration, tracked-file edit,
  build, commit, or push was performed.

Citations:
- `kelly-slaters-pro-surfer/KS/SRC/ks/GraphicalMenuSystem.cpp:378-389`
- `kelly-slaters-pro-surfer/KS/SRC/ks/GraphicalMenuSystem.h:124-180`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:56-76,150-166,424-465`
- `tmp/functions/001BDB10_ChangeBtn__9HelpbarFEibG7stringx/attempt-1/compiler.stderr`

## Outcome

The exact released helpbar button-change function failed to compile in the isolated bench; no source variant was attempted.
