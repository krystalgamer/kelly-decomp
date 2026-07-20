# Increase__12SpecialMeterf

- Address: `0x00250FB8`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.8462 | 23.0769 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released positive-value guard and SetFillage call. EE GCC converted the call into a sibling tail jump, eliminating the target frame and producing 40 bytes.

### Attempt 2 notes

The released positive-value guard and fillage addition matched exactly with `fillage` at offset 0x8. The trailing empty barrier prevents EE GCC from replacing SetFillage with a sibling tail jump.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released special-meter increase matched exactly.
