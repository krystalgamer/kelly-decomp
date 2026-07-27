# _$_Q213script_object8instance

- Address: `0x00350390`
- Size: `0xE8` (232 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 18.9516 | 0.0 | `candidate.cpp` |
| 3 | different | 22.1429 | 1.4286 | `candidate.cpp` |
| 4 | different | 22.1429 | 1.4286 | `candidate.cpp` |
| 5 | different | 18.9516 | 0.0 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released script instance destructor semantics are recovered, but isolated old-STL declarations either call an out-of-line thread-list destructor or hoist cleanup state, rather than the target inline list teardown and 128-byte frame.
