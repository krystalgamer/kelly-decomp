# _$_13PreformatText

- Address: `0x001D9010`
- Size: `0xC0` (192 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 13.5417 | 4.1667 | `candidate.cpp` |
| 3 | different | 32.8125 | 16.6667 | `candidate.cpp` |
| 4 | different | 13.5417 | 4.1667 | `candidate.cpp` |
| 5 | different | 13.5417 | 4.1667 | `candidate.cpp` |

### Attempt 1 notes

The native C++ destructor emitted its own derived vtable, conflicting with
the target vtable binding.

### Attempt 3 notes

Interface-suppressed pointer-temporary cleanup reached the best score, but
remained 40 bytes short because EE GCC emitted out-of-line base cleanup.

### Attempt 5 notes

Guarded deletion and non-emitting barrier forms could not reproduce the
target's flattened vector and base-string destructor sequence.

## Outcome

Five source-level destructor forms could not reproduce the target's flattened PreformatText vector and TextString cleanup.
