# TurnPQ__12KeyboardMenub

- Address: `0x001A1C10`
- Size: `0xE4` (228 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.5385 | 0.0 | `candidate.cpp` |
| 2 | different | 13.3333 | 3.3333 | `candidate.cpp` |
| 3 | different | 42.6724 | 29.3103 | `candidate.cpp` |
| 4 | different | 14.1667 | 3.3333 | `candidate.cpp` |
| 5 | different | 91.2281 | 80.7018 | `candidate.cpp` |

### Attempt 1 notes

Compiled the exact released two-loop body with the full released KeyboardMenu declaration and canonical PanelQuad virtual layout. All member offsets were correct, but EE GCC retained three independent key-column induction pointers plus two end pointers, increasing the frame and function to 260 bytes instead of folding the row into the shipped single cursor/countdown loop.

### Attempt 2 notes

Rewrote the released indexed key loop as one source-equivalent row cursor/countdown and pinned the target saved registers. The compiler still hoisted `name_box` into an extra `$s4`, then repurposed `$s3` as a 32K-adjusted cursor base, growing the frame to 96 bytes and changing the loop back-edge.

### Attempt 3 notes

Kept `$s3` live through the first loop to prevent early `name_box` hoisting. This restored the target self lifetime and removed one endpoint, but the explicitly fixed cursor still triggered GCC's 32K-adjusted-address canonicalization into an extra `$s4`, leaving a 232-byte function.

### Attempt 4 notes

Allowed the compiler to allocate the single cursor while retaining self and the countdown registers. GCC still split the first two key columns into a 32K-adjusted `$s4` induction pointer and kept `$s0` for the third column, so the extra saved register/frame remained.

### Attempt 5 notes

Used one source-level row pointer and countdown for the 40 key rows, retaining the target `$s3/$s2/$s1` values. This produced the exact 228-byte size and 46/57 matching instructions. Remaining differences are equivalent induction-base choices: candidate uses `keys[0][0]` with offsets 0/4/8 and reuses `$s3` for `name_box`, while target uses `keys[0][2]` with offsets -8/-4/0 and keeps the second cursor in `$s0`.

## Outcome

Deferred after five source-level attempts. The exact KeyboardMenu quad loops, verified offsets, and TurnOn dispatch are recovered at target size, but GCC2 selects different induction bases and saved registers for the key rows and name boxes.
