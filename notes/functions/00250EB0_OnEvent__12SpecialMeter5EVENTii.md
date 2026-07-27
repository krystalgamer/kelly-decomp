# OnEvent__12SpecialMeter5EVENTii

- Address: `0x00250EB0`
- Size: `0x108` (264 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.9697 | 51.5152 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Extracted `SpecialMeter::OnEvent` verbatim from released `specialmeter.cpp` (comments omitted only).
- Self-contained declarations reproduce the `EVENT` enumerators used by the body and the `SpecialMeter` field order/offset-bearing layout required by the method.
- Tested exactly once with `env/bin/python tools/function_test.py test 0x00250EB0 --candidate .../candidate.cpp`.
- Result: `different`; byte score 71.9697% (190/264), instruction score 51.5152% (34/66), candidate size 256 versus target 264.
- No variants or diff chasing performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/specialmeter.cpp:147-190` — exact released function body.
- `kelly-slaters-pro-surfer/KS/SRC/ks/specialmeter.h:10-49` — class inheritance, field order, and method declaration.
- `kelly-slaters-pro-surfer/KS/SRC/ks/eventmanager.h:7-23` — exact `EVENT` values used by the body.
- `notes/function_queue.csv:5739` — target metadata and queue state.

## Outcome

The exact released special-meter event handler differed from the target; the sole attempt scored 71.9697%.
