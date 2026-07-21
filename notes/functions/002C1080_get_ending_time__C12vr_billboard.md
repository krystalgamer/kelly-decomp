# get_ending_time__C12vr_billboard

- Address: `0x002C1080`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/billboard.cpp`
- Reference source: `KS/SRC/billboard.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.0714 | 35.7143 | `candidate.cpp` |
| 2 | different | 41.0714 | 35.7143 | `candidate.cpp` |
| 3 | different | 41.0714 | 35.7143 | `candidate.cpp` |
| 4 | different | 37.5 | 35.7143 | `candidate.cpp` |
| 5 | different | 33.9286 | 28.5714 | `candidate.cpp` |

### Attempt 1 notes

The released body directly scales the material animation length by 1/30 second per frame. The available compiler emitted every semantic instruction but omitted the target `nop` between `mtc1` and `cvt.s.w`.

### Attempt 2 notes

Stored and pinned the returned frame count with an empty scheduling barrier before conversion. This did not introduce the target conversion-hazard nop.

### Attempt 3 notes

Expressed the integer-to-float conversion through a local float before scaling. EE GCC still emitted adjacent `mtc1` and `cvt.s.w`, leaving the target nop absent.

### Attempt 4 notes

Tried the equivalent division spelling. The compiler strength-reduced it to the same multiply sequence without the released hazard nop.

### Attempt 5 notes

Pinned the source-level seconds-per-frame constant with an empty barrier to explore scheduling without emitting instructions. The conversion still lacked the target nop and the schedule did not match.

## Outcome

The released arithmetic is reconstructed, but the available EE compiler omits the target integer-to-float hazard nop. Source-authentic candidates cannot reproduce that scheduling difference without prohibited instruction-emitting assembly, so the function is deferred.
