# message_handler__11menu_widgetUiUiff

- Address: `0x0033F498`
- Size: `0x184` (388 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.6598 | 30.9278 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Status: `different`
- Attempt count: 1
- Score: 63.6598%; instruction score: 30.9278%
- Match counts: 247/388 bytes, 30/97 instructions
- Candidate path: `tmp/functions/0033F498_message_handler__11menu_widgetUiUiff/attempt-1/candidate.cpp`
- Candidate SHA-1: `54f29540e362e8da9bf69d9ba764dc6fb909c823`
- Candidate SHA-256: `8109c1eeb271eedbf1584d57b5a32475ef328729b0904b706631952a2ee36535`
- Started: `2026-07-28T10:32:34.607222411Z`
- Finished: `2026-07-28T10:32:36.905947776Z`
- Duration: 2298 ms

The candidate uses the exact released `menu_widget::message_handler` body and minimal source-faithful declarations needed by the isolated harness.

Citations: `kelly-slaters-pro-surfer/KS/SRC/widget.cpp:1071-1106`; `kelly-slaters-pro-surfer/KS/SRC/widget.h:28,107,151-155,435-475`.

## Outcome

The exact released menu-widget message handler differed at 63.6598% byte score; no source variant was attempted.
