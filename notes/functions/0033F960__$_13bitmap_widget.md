# _$_13bitmap_widget

- Address: `0x0033F960`
- Size: `0x50` (80 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.0 | 90.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 90.0 | 90.0 | `candidate.cpp` |
| 4 | different | 56.25 | 50.0 | `candidate.cpp` |
| 5 | different | 90.0 | 90.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released empty destructor and bitmap_widget/widget/mat_fac declarations, then used the established generated-destructor layout. The body reached 90%; only the independent ra save and self-register setup were scheduled in the opposite order.

### Attempt 2 notes

Tried expressing the exact empty destructor through source-faithful widget, mat_fac, and bitmap_widget class declarations. The compiler attempted to define the bound vtable locally and the candidate did not assemble.

### Attempt 3 notes

Removed the intermediate layout pointer while preserving the exact generated destructor calls and offsets. The same two-instruction scheduling mismatch remained at 90%.

### Attempt 4 notes

Added the matching-only compiler barrier at destructor entry to constrain the prologue. It over-constrained scheduling and regressed the score to 56.25%.

### Attempt 5 notes

Restored the best generated-destructor form and expressed the member deleting mode as a const source value. The compiler again produced the same 90% prologue scheduling mismatch.

## Outcome

Released bitmap_widget destructor remained blocked by a two-instruction prologue scheduling mismatch after five source-level attempts.
