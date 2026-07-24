# clear_script_callbacks__9signaller

- Address: `0x0034CDD8`
- Size: `0x70` (112 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released signaller script-callback loop, fast_vector layout, null handling, and clear_script_callbacks/clear_links sequence. The exact source-level loop matched on attempt 1.

## Outcome

Matched signaller script callback clearing
