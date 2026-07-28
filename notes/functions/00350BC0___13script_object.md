# __13script_object

- Address: `0x00350BC0`
- Size: `0x178` (376 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Result: `compile_failed` (score `0.0`). The exact released constructor body was used with minimal declarations/layout derived from the pinned `script_object.h`; compilation failed because the isolated compiler include paths do not provide `<list>`, `<set>`, or `<vector>`.

Citations:
- `krystalgamer/kelly-slaters-pro-surfer@7c3ade041cc03409a3114ce3ba4a70053c6e4e3b:KS/SRC/script_object.cpp` (`script_object::script_object()`)
- `krystalgamer/kelly-slaters-pro-surfer@7c3ade041cc03409a3114ce3ba4a70053c6e4e3b:KS/SRC/script_object.h` (`class script_object` data layout)

No retry: FIRST PASS permits exactly one candidate test, and this compile failure consumed it.

## Outcome

Exact released-source first pass for script object construction did not match.
