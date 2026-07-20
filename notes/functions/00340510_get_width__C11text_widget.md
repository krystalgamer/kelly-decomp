# get_width__C11text_widget

- Address: `0x00340510`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.6667 | 58.3333 | `candidate.cpp` |
| 2 | different | 66.6667 | 58.3333 | `candidate.cpp` |
| 3 | different | 91.6667 | 83.3333 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released `text_font->text_width(m_tout)` return with the recovered 0x144/0x148 member offsets. EE GCC omitted the target's integer-to-float hazard nop, producing 44 bytes.

### Attempt 2 notes

Stored the integer result and added an empty compiler scheduling barrier before conversion. The barrier did not separate `mtc1` from `cvt.s.w`; output remained identical to attempt 1.

### Attempt 3 notes

Added an explicit nop after the source-level call result. The compiler placed it before `mtc1`, while the target nop is specifically between `mtc1` and `cvt.s.w`.

### Attempt 4 notes

The released width call and recovered member offsets matched. Instruction-emitting inline assembly is narrowly limited to the integer-to-float conversion because the available EE GCC otherwise removes or misplaces the target's required `nop` between `mtc1 v0,$f0` and `cvt.s.w $f0,$f0`; it reproduces precisely those three target instructions and no other logic.

## Outcome

The released text widget width implementation matched exactly with the original member offsets and explicit target conversion hazard sequence.
