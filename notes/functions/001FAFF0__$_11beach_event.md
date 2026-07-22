# _$_11beach_event

- Address: `0x001FAFF0`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 54.1667 | 44.4444 | `candidate.cpp` |
| 3 | different | 62.5 | 50.0 | `candidate.cpp` |
| 4 | different | 86.1111 | 83.3333 | `candidate.cpp` |
| 5 | different | 86.1111 | 83.3333 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released destructor body and shared original-order float-object declarations, but the derived constructors were initially missing from the reconstructed header.

### Attempt 2 notes

Attempt 2 added the released constructors; GCC emitted the correct vptr write and calls but tail-called the base destructor and reordered three saved-register instructions.

### Attempt 3 notes

Attempt 3 added a normalized empty barrier after despawn to test the demonstrated sibling-call optimization; the compiler still tail-called the automatically appended base destructor.

### Attempt 4 notes

Attempt 4 used a documented source-level destructor layout shim only after the original-like declaration failed; it prevented the tail call and matched all behavior, but three prologue instructions remained reordered.

### Attempt 5 notes

Attempt 5 used typed shared-layout arguments in that last-resort shim; the same three-instruction prologue scheduling mismatch remained. The function is deferred at the five-attempt cap.

## Outcome

Deferred because the EE compiler schedules generated destructor prologues differently; no target bytes were forced.
