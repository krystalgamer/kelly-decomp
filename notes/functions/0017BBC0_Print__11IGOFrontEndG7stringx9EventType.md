# Print__11IGOFrontEndG7stringx9EventType

- Address: `0x0017BBC0`
- Size: `0xDC` (220 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.1818 | 27.2727 | `candidate-round1.cpp` |
| 2 | different | 39.0909 | 27.2727 | `candidate-round2.cpp` |
| 3 | different | 35.0 | 23.6364 | `candidate-round3.cpp` |
| 4 | different | 38.6364 | 27.2727 | `candidate-round4.cpp` |
| 5 | different | 54.5455 | 27.2727 | `candidate-round5b.cpp` |

### Attempt 1 notes

Used the exact released IGOFrontEnd::Print body with consolidated string, queue, text, sound, and frontend declarations. The target additionally resets otherText->time after MakeOtherText, so the candidate was 196 bytes instead of 220.

### Attempt 2 notes

Added the target-version TEXT_WAIT_MAX assignment after MakeOtherText. The resulting 216-byte candidate matched the major control-flow shape, but lacked the target floating-point scheduling nop and used an add/branch comparison for SS_LAST.

### Attempt 3 notes

Made the zero float explicit through an instruction-free register constraint and expressed the event test as XOR. This recovered the target xori comparison, but reordered the floating load and zero materialization and still did not produce the scheduling nop.

### Attempt 4 notes

Used the accurate polymorphic TextString/BoxText layout and explicit XOR comparison without the float constraint. The load order and event comparison matched, but EE GCC still emitted 216 bytes because it omitted the target-only floating-point nop.

### Attempt 5 notes

Kept a local text pointer and named zero value while retaining the target-version time reset and XOR comparison. It reached the 220-byte target size, but volatile access changed register allocation and branch scheduling; this was the best byte score without instruction-emitting asm.

## Outcome

Deferred after five source-level attempts. The target-version text timer reset and event comparison were recovered, but the remaining floating-point scheduling nop and register schedule could not be reproduced without disallowed instruction-emitting assembly.
