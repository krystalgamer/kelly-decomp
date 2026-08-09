# get_width__C11text_widget

- Address: `0x00340510`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.6667 | 58.3333 | `candidate.cpp` |
| 2 | different | 66.6667 | 58.3333 | `candidate.cpp` |
| 3 | different | 66.6667 | 58.3333 | `candidate.cpp` |

### Attempt 1 notes

Used the released `text_font->text_width(m_tout)` return with the recovered 0x144/0x148 member offsets. EE GCC omitted the target's integer-to-float hazard nop, producing 44 bytes.

### Attempt 2 notes

Stored the integer result and added an empty compiler scheduling barrier before conversion. The barrier did not separate `mtc1` from `cvt.s.w`; output remained identical to attempt 1.

### Attempt 3 notes

Added an explicit nop after the source-level call result. The compiler placed it before `mtc1`, while the target nop is specifically between `mtc1` and `cvt.s.w`.

### Attempt 3 notes

Three native forms emit a 44-byte conversion sequence without the target's FPU
hazard `nop`.

## Outcome

The prior exact form used non-released inline assembly to force the missing
`nop`. That assembly was removed and the accessor was deferred.
