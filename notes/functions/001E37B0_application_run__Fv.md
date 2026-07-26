# application_run__Fv

- Address: `0x001E37B0`
- Size: `0xDC` (220 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 10.1695 | `candidate-round1.cpp` |
| 2 | different | 22.9167 | 10.0 | `candidate-round2.cpp` |
| 3 | different | 15.4545 | 0.0 | `candidate-round3.cpp` |
| 4 | different | 27.1186 | 10.1695 | `candidate-round4.cpp` |
| 5 | different | 15.9091 | 0.0 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released application loop with reconstructed game flags, app singleton, master-clock tick, globals, and released mfc0 cycle read. Relocatable format strings, 64-bit-to-bool sign extension, and a final tail call produced 236 bytes.

### Attempt 2 notes

Bound both format strings and prevented the final nglPrintf tail call. The string addresses matched, but the flag helper still emitted four sign-extension instructions and the shared string base introduced an extra exit branch.

### Attempt 3 notes

Narrowed the quit flag to uint32 and used direct format addresses. This removed the sign extensions and reduced the body to 204 bytes, but GCC coalesced the application-name and active-flag bases and used one fewer saved register than the target.

### Attempt 4 notes

Pinned the target global bases to the intended callee-saved registers. The compiler additionally retained a format-string base in $s5 and emitted a 112-byte frame plus an extra exit branch, returning to 236 bytes.

### Attempt 5 notes

Pinned only the application-name base and call argument register while leaving the loop globals to normal allocation. GCC again coalesced bases and emitted the 204-byte four-register form; the target five-register prologue was not recovered.

## Outcome

Deferred after five source-level attempts. The released loop, quit flag, inline master clock tick, app call, strings, and globals were reconstructed, but EE GCC either coalesced one target base register or introduced extra saved state and exit branches.
