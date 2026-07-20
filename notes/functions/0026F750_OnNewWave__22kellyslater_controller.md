# OnNewWave__22kellyslater_controller

- Address: `0x0026F750`
- Size: `0x30` (48 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/kellyslater_controller.h`
- Reference source: `KS/SRC/ks/kellyslater_controller.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline handler calls the embedded board controller at offset 0x37c, then `Reset`. The trailing empty barrier preserves the target second call and return frame.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `kellyslater_controller::OnNewWave` wrapper matched exactly on the first attempt.
