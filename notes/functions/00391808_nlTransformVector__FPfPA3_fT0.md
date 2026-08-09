# nlTransformVector__FPfPA3_fT0

- Address: `0x00391808`
- Size: `0x30` (48 bytes)
- Object: `nsl/nl_ps2`
- Debug source: `C:/NSL/PS2/nl_ps2.cpp`
- Reference source: `NSL/PS2/nl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 79.1667 | 75.0 | `candidate.cpp` |
| 3 | different | 79.1667 | 75.0 | `candidate.cpp` |

### Attempt 1 notes

Transcribed the released VU0 matrix-apply inline assembly using objdump-style `$vf`/component syntax. The legacy EE assembler rejected the multiply-accumulate operand spelling, so the candidate did not assemble.

### Attempt 2 notes

Used the exact released legacy assembler spelling (`ACC`, `vf4`, `vf8`). All ten VU instructions matched, but EE GCC moved the final `sqc2` into the `jr ra` delay slot and omitted the target's trailing nop, producing 44 bytes.

### Attempt 3 notes

Equivalent native wrappers retain the released VU0 sequence, but EE GCC moves
the final `sqc2` into the return delay slot and emits 44 bytes.

## Outcome

The prior exact form appended a non-released instruction-emitting `nop`.
That scaffolding was removed and the function was deferred.
