# open__13bitmap_widgetPCc

- Address: `0x0033FAE0`
- Size: `0xFC` (252 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.0317 | 7.9365 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue row was `pending` with zero attempts; neither address scratch path existed before preparation.
- Used the released `bitmap_widget::open` body from `widget.cpp:1270-1312` with the authentic `stringx`, `mat_fac`, `map_e`, widget flag/layout, `rectf`, and PS2 `vector2d` declarations needed by that body.
- Result: **different** — byte score 21.0317%, instruction score 7.9365%; candidate size 240 versus target 252 bytes.
- Exactly one candidate was tested; no second attempt or diff chasing was performed.

## Outcome

Exact released bitmap widget open source differed from the target; preserved attempt 1 for the later Sol pass.
