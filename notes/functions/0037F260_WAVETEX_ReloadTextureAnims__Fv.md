# WAVETEX_ReloadTextureAnims__Fv

- Address: `0x0037F260`
- Size: `0x48` (72 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.4737 | 5.2632 | `candidate.cpp` |
| 2 | different | 14.4737 | 5.2632 | `candidate.cpp` |
| 3 | different | 14.4737 | 5.2632 | `candidate.cpp` |
| 4 | different | 14.4737 | 5.2632 | `candidate.cpp` |
| 5 | different | 14.4737 | 5.2632 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released call sequence and boolean types first. The available compiler saved s0 before the first call and emitted a nop delay slot, while the target saves s0 in that delay slot.

### Attempt 2 notes

Separating declaration and assignment retained the same register-save schedule.

### Attempt 3 notes

A const local retained the same schedule.

### Attempt 4 notes

A register-qualified local retained the same schedule.

### Attempt 5 notes

An integer state local retained the same schedule; the function is deferred rather than forcing prologue bytes.

## Outcome

The released wave texture reload call sequence is exact, but available GCC emits an extra initial delay-slot nop instead of scheduling the s0 save there.
