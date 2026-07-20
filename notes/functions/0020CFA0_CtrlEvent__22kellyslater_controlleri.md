# CtrlEvent__22kellyslater_controlleri

- Address: `0x0020CFA0`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.5 | 90.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

A minimal layout preserves the joystick id at 0x1b10 and forwards it with the requested control to the global input manager. The `.equ` uses the carried `0x0046B7B0` alias so the negative low half still addresses the real `0x0045B7B0` global while reproducing target `%hi`.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `kellyslater_controller::CtrlEvent` wrapper matched exactly.
