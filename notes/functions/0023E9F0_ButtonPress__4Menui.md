# ButtonPress__4Menui

- Address: `0x0023E9F0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.0 | 46.6667 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 4 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 5 | different | 93.3333 | 86.6667 | `candidate.cpp` |

### Attempt 1 notes

The released behavior with a manual ABI vtable dispatched correctly, but the final Refresh became a tail call and the saved-register stores were reversed.

### Attempt 2 notes

Adding the reviewed barrier name without the project declaration failed to compile in the isolated candidate.

### Attempt 3 notes

The project barrier prevented the Refresh tail call and reached 93.33%, but GCC still stored s0 before ra rather than the target ra-before-s0 order.

### Attempt 4 notes

Reconstructing the released virtual Menu class and direct OnButtonPress call preserved the same sole two-instruction prologue ordering mismatch.

### Attempt 5 notes

Using the released MenuSystem inheritance type for control also remained at 93.33%; the authentic behavior cannot reproduce the target save order in isolation.

## Outcome

Five source-authentic attempts reproduced the virtual dispatch and Refresh behavior, but isolated old GCC consistently reverses the target ra/s0 save order.
