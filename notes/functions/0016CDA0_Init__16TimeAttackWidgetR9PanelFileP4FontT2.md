# Init__16TimeAttackWidgetR9PanelFileP4FontT2

- Address: `0x0016CDA0`
- Size: `0xDC` (220 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_timeattack.cpp`
- Reference source: `KS/SRC/ks/igo_widget_timeattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.4545 | 83.6364 | `candidate-round1.cpp` |
| 2 | different | 87.2727 | 85.4545 | `candidate-round2.cpp` |
| 3 | different | 81.8182 | 76.3636 | `candidate-round3.cpp` |
| 4 | different | 81.8182 | 76.3636 | `candidate-round4.cpp` |
| 5 | different | 81.8182 | 76.3636 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released Init body with the existing FEPanel and TimeAttack declarations. The candidate had the correct 220-byte size, but the literal remained relocatable, PanelQuad placed its vtable at 0x19C instead of 0x194, and the prologue save schedule differed.

### Attempt 2 notes

Replaced the panel-name literal with its exact address and consolidated accurate TextString, PanelQuad, PanelFile, and widget layouts. Every instruction after the prologue matched; EE GCC still saved $ra after the callee-saved argument registers rather than first, leaving eight prologue instructions different.

### Attempt 3 notes

Added an instruction-free $ra clobber constraint to force an earlier return-address save. The compiler instead changed the first virtual-call receiver register and kept the $ra save late, reducing the score.

### Attempt 4 notes

Bound the return address to $31 with an instruction-free read/write constraint. EE GCC again moved the constraint after argument setup and produced the same inferior scheduling as attempt 3.

### Attempt 5 notes

Changed the $31 constraint to output-only so it could be scheduled at function entry. The compiler still placed the save after the argument moves and retained the altered first-call register allocation; the exact prologue remained unrecovered.

## Outcome

Deferred after five source-level attempts. Accurate widget, text, panel, and literal declarations reproduced every instruction after the prologue, but the target return-address save ordering could not be generated without instruction-emitting assembly.
