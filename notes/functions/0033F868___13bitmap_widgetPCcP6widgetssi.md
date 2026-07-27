# __13bitmap_widgetPCcP6widgetssi

- Address: `0x0033F868`
- Size: `0xF4` (244 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.9016 | 13.4615 | `candidate.cpp` |
| 2 | different | 79.918 | 27.2727 | `candidate.cpp` |
| 3 | different | 79.918 | 27.2727 | `candidate.cpp` |
| 4 | different | 79.918 | 27.2727 | `candidate.cpp` |
| 5 | different | 79.918 | 27.2727 | `candidate.cpp` |

### Attempt 1 notes

Exact released constructor body with the faithful widget, mat_fac, texture-coordinate, and bitmap layout. The trivial texture-coordinate declaration omitted the released empty array-construction loop, yielding 196 bytes.

### Attempt 2 notes

Restored a non-trivial empty texture-coordinate constructor. The candidate reached the exact 244-byte size and 79.918% byte identity, but loop induction and call-delay scheduling differed.

### Attempt 3 notes

Modeled the released texture_coord inheritance from vector2dr. The compiler produced the same 244-byte mismatch as attempt 2.

### Attempt 4 notes

Inserted a zero-instruction barrier between generated member construction and the released body to prevent induction-variable reuse. EE GCC retained the same differing schedule.

### Attempt 5 notes

Represented the empty texture-coordinate construction loop explicitly and combined the released rhw/z assignments into one equivalent expression. The generated function remained the same 244-byte near candidate and did not match.

## Outcome

The released bitmap_widget constructor and four faithful texture-coordinate/layout variants all compiled to non-matching code. The best candidates had the exact 244-byte size and 79.918% byte identity, but the generated empty-construction loop and rhw call-delay schedule remained different.
