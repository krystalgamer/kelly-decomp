# clear_script_callbacks__6signal

- Address: `0x0034C7E0`
- Size: `0xE0` (224 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 33.9286 | 5.3571 | `candidate.cpp` |
| 3 | different | 43.4211 | 12.2807 | `candidate.cpp` |
| 4 | different | 27.5424 | 3.3898 | `candidate.cpp` |
| 5 | different | 41.3793 | 10.3448 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact released callback-removal loop is known, but old-GCC iterator temporary placement, allocator-base hoisting, and list erase scheduling do not match without a broader canonical signal/list context.
