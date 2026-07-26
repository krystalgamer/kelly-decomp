# buttonStatus__18AISurferControlleri

- Address: `0x00103ED0`
- Size: `0xE8` (232 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.cpp`
- Reference source: `KS/SRC/AIController.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 99.1379 | 100.0 | `candidate-round1.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-round2.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate-round3.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate-4-consolidated.cpp` |

### Attempt 1 notes

Used the exact released switch and authentic controller layout. All instructions matched; only two local jump-table address bytes differed.

### Attempt 2 notes

Dispatched through the existing target jump table with GNU computed goto. Function text matched all 232 bytes and 58 instructions, but label-retention metadata was still in data.

### Attempt 3 notes

Moved the label-retention array to a discard-only section while preserving the exact function text and emitting no ROM data.

### Attempt 4 notes

Revalidated the exact match after consolidating the authentic input-device and AISurferController layouts into ai_rtti_shared.h.

## Outcome

Matched the released AI surfer button-status switch using the authentic controller layout, the shipped jump table, target local-label aliases, and discard-only label-retention metadata that adds no ROM data.
