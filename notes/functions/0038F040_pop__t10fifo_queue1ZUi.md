# pop__t10fifo_queue1ZUi

- Address: `0x0038F040`
- Size: `0x64` (100 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 47.0 | 36.0 | `candidate.cpp` |
| 4 | different | 47.0 | 36.0 | `candidate.cpp` |
| 5 | different | 89.4231 | 84.6154 | `candidate.cpp` |

## Outcome

Released FIFO pop was reconstructed with exact layout and semantics; five candidates could not reproduce the count reload/register scheduling exactly.
