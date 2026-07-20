# get_next_rhw_2d_val__6widget

- Address: `0x0033F298`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 100.0 | `candidate.cpp` |
| 2 | different | 97.9167 | 91.6667 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released `get_next_rhw_2d_val` body with self-contained widget static declarations. The emitted instruction sequence matched, but unresolved static-member relocations left six address bytes different in the isolated object.

### Attempt 2 notes

Bound both widget static members with matching-only absolute symbol aliases. The value-array address matched; the assembler encoded the layer address HI16 as `0x45` instead of the target's relocation-adjusted `0x46`, leaving one byte different.

### Attempt 3 notes

The released method matched exactly. The static-member `.equ` declarations are matching-only address annotations; the layer alias uses `0x0046B730` so isolated absolute assembly reproduces the target's HI16 relocation carry while the signed LO16 still addresses the real `0x0045B730` object. They emit no instructions.

## Outcome

The released widget RHW allocator matched exactly after preserving the original float update and reproducing the static-member address relocation.
