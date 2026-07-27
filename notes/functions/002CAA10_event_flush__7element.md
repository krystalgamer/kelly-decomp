# event_flush__7element

- Address: `0x002CAA10`
- Size: `0x10C` (268 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/element.cpp`
- Reference source: `KS/SRC/element.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.9254 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released `element::event_flush` body and reconstructed only the event/element list layouts and required declarations. The self-contained first candidate compiled and was tested exactly once, but differed: 14.9254% byte score, 0/67 matching instructions, 196 candidate bytes versus 268 target bytes. Per first-pass policy, no variants or diff chasing were attempted.

## Outcome

The exact released element event-flush definition differed from the target; the sole attempt scored 14.9254%.
