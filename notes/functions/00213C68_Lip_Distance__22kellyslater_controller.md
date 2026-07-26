# Lip_Distance__22kellyslater_controller

- Address: `0x00213C68`
- Size: `0xC0` (192 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.625 | 50.0 | `candidate.cpp` |
| 2 | different | 96.875 | 95.8333 | `candidate.cpp` |
| 3 | different | 90.1042 | 87.5 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A ternary clamp optimized to conditional floating-point moves and omitted the
released `max` template's referenced stack temporaries.

### Attempt 2 notes

Restoring a reference-returning maximum template matched 46 of 48
instructions; only the zero-store and board-position load order differed.

### Attempt 4 notes

Using the exact released single `max` expression recovered that evaluation
order and matched exactly.

## Outcome

Matched surfer lip-distance normalization, Mavericks scaling, and zero clamp.
