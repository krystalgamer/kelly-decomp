# get_height__C11text_widget

- Address: `0x00340540`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released height call and recovered member offsets matched on the first attempt. Instruction-emitting inline assembly is narrowly limited to the integer-to-float conversion because the available EE GCC otherwise omits the target's required `nop` between `mtc1 v0,$f0` and `cvt.s.w $f0,$f0`; it reproduces precisely those three target instructions and no other logic.

## Outcome

The released text widget height implementation matched exactly with the original member offsets and explicit target conversion hazard sequence.
