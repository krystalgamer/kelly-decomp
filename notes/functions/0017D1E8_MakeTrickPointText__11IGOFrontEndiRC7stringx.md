# MakeTrickPointText__11IGOFrontEndiRC7stringx

- Address: `0x0017D1E8`
- Size: `0xE0` (224 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.3214 | 96.4286 | `candidate-round1.cpp` |
| 2 | different | 54.8246 | 45.614 | `candidate-round2.cpp` |
| 3 | different | 97.3214 | 96.4286 | `candidate-round3.cpp` |
| 4 | different | 13.8393 | 3.5714 | `candidate-round4.cpp` |
| 5 | different | 97.3214 | 96.4286 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released helper with reconstructed game, player, RandomText, color, timer, string, and vtable offsets. It matched 54 of 56 instructions and 218 of 224 bytes; only hidden string-copy argument setup was reversed.

### Attempt 2 notes

Pinned the hidden string-copy destination to the stack pointer. The fixed register added one instruction and disrupted the surrounding schedule.

### Attempt 3 notes

Introduced a const reference alias for the input text. GCC reproduced attempt 1 byte-for-byte.

### Attempt 4 notes

Cached the player trick-point pointer. GCC eliminated repeated target loads and reduced the function to 176 bytes.

### Attempt 5 notes

Added an instruction-free dependency on the text reference before changeText. GCC retained the 224-byte attempt-1 layout and the same two scheduling differences.

## Outcome

Deferred after five source-level attempts. The exact 224-byte helper, all object offsets, virtual calls, static color/timer loads, and 54 of 56 instructions matched; only the hidden string-copy argument setup order remained different.
