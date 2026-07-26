# PutUpLoadingScreen__13BeachFrontEnd

- Address: `0x00190538`
- Size: `0xDC` (220 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BeachFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.5455 | 94.5455 | `candidate-round1.cpp` |
| 2 | different | 94.5455 | 94.5455 | `candidate-round2.cpp` |
| 3 | different | 10.5469 | 4.6875 | `candidate-round3.cpp` |
| 4 | different | 15.9483 | 5.1724 | `candidate-round4.cpp` |
| 5 | different | 29.9107 | 23.2143 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released loading-screen body with consolidated BeachFrontEnd, FEMenu, BoxText, string, helpbar, manager, and text-array declarations. It matched 52 of 55 instructions; only three independent copy-constructor setup instructions were scheduled differently.

### Attempt 2 notes

Introduced a const reference for the loading text while retaining the released operation order. EE GCC generated the same 220-byte candidate and the same three scheduling differences as attempt 1.

### Attempt 3 notes

Materialized an explicit stringx local before the timer assignment to influence copy scheduling. The compiler emitted two string copies plus local destruction, expanding the function to 256 bytes.

### Attempt 4 notes

Used an instruction-free fixed-register constraint around the copy destination. GCC introduced a frame pointer and a 64-byte frame, producing 232 bytes and substantially different scheduling.

### Attempt 5 notes

Bound a stack-pointer register to the hidden copy destination without emitting instructions. The extra fixed-register lifetime still expanded the function to 224 bytes; the exact three-instruction schedule from attempts 1 and 2 remained best.

## Outcome

Deferred after five source-level attempts. The exact released body, declarations, offsets, calls, and 220-byte layout were recovered, but three independent string-copy setup instructions remained scheduled differently.
