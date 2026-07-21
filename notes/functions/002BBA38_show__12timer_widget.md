# show__12timer_widget

- Address: `0x002BBA38`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_script.cpp`
- Reference source: `KS/SRC/widget_script.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override returns when already shown, otherwise starts the timer, marks it stale, and calls `widget::show`. The recovered flag and state offsets match directly; the empty matching barrier prevents the final base call from becoming a sibling tail call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The timer-widget show override matches with its released visibility guard, state reset, and base show call.
