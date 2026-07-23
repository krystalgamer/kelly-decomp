# _$_16menu_item_widget

- Address: `0x00360508`
- Size: `0x50` (80 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.0 | 90.0 | `candidate.cpp` |
| 2 | different | 61.25 | 55.0 | `candidate.cpp` |
| 3 | different | 61.25 | 55.0 | `candidate.cpp` |
| 4 | different | 55.0 | 50.0 | `candidate.cpp` |
| 5 | different | 90.0 | 90.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released empty destructor and menu_item_widget/widget/stringx declarations, then used the established generated-destructor pattern. The body reached 90%; only the independent ra save and self-register setup were scheduled in the opposite order.

### Attempt 2 notes

Expressed the destructor through source-faithful widget, stringx, and menu_item_widget classes while making select the external key virtual. The generated control flow was 76 bytes and scored 61.25%.

### Attempt 3 notes

Removed the matching barrier from the direct generated-destructor form. The compiler tail-optimized the final base destructor and produced the same 76-byte 61.25% shape.

### Attempt 4 notes

Added the matching-only compiler barrier at destructor entry and exit. This over-constrained instruction scheduling and regressed the score to 55%.

### Attempt 5 notes

Restored the best generated-destructor source and expressed the member deleting mode as a const value. The same two-instruction prologue scheduling mismatch remained at 90%.

## Outcome

Released menu_item_widget destructor remained blocked by a two-instruction prologue scheduling mismatch after five source-level attempts.
