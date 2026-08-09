# _$_13code_callback

- Address: `0x0034BEB8`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.25 | 0.0 | `candidate.cpp` |
| 2 | different | 6.25 | 0.0 | `candidate.cpp` |
| 3 | different | 6.25 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Three native empty-destructor forms collapse to a 20-byte
`signal_callback` tail call.

## Outcome

The target frame required manual base-vtable restoration and a compiler
barrier. Those matching-only constructs were removed.
