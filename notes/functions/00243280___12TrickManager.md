# __12TrickManager

- Address: `0x00243280`
- Size: `0xDC` (220 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/trick_system.cpp`
- Reference source: `KS/SRC/ks/trick_system.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.6897 | 0.0 | `candidate-round1.cpp` |
| 2 | different | 20.339 | 0.0 | `candidate-round2.cpp` |
| 3 | different | 25.8772 | 1.8182 | `candidate-round3.cpp` |
| 4 | different | 25.8772 | 1.8182 | `candidate-round4.cpp` |
| 5 | different | 20.339 | 1.7544 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released TrickManager constructor and reconstructed event, trick, button, timer, and owner layout. GCC hoisted later-loop pointers ahead of the button clear loop and omitted the target-version button_pressed_this_frame reset, producing 232 bytes.

### Attempt 2 notes

Added the missing button_pressed_this_frame reset and a memory barrier between initialization loops. The barrier did not stop pure pointer hoisting and expanded the candidate to 236 bytes.

### Attempt 3 notes

Expressed the first clear loop explicitly in the target $v0/$v1 registers and retained the extra reset. This reduced the candidate to 228 bytes and was the best score, but later-loop address calculations were still hoisted.

### Attempt 4 notes

Added a memory barrier after the explicit reverse clear loop. GCC continued to hoist pure address calculations across the barrier, reproducing attempt 3 byte-for-byte.

### Attempt 5 notes

Added instruction-free clobbers for the registers used by the later loops to block hoisting. The allocator selected alternate registers and expanded the function to 236 bytes rather than matching the target schedule.

## Outcome

Deferred after five source-level attempts. The full object layout and target-version field reset were recovered, but EE GCC consistently hoisted later-loop address calculations ahead of the first clear loop and retained a longer schedule.
