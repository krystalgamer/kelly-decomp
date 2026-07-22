# active_time_elapsed__6wevent

- Address: `0x0033D4A0`
- Size: `0x48` (72 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.9444 | 77.7778 | `candidate.cpp` |
| 2 | different | 81.9444 | 77.7778 | `candidate.cpp` |
| 3 | different | 65.2778 | 50.0 | `candidate.cpp` |
| 4 | different | 66.6667 | 61.1111 | `candidate.cpp` |
| 5 | different | 65.2778 | 61.1111 | `candidate.cpp` |

### Attempt 1 notes

The exact released conditional returns and shared wevent field layout produced the correct arithmetic, but GCC merged the duration return with the earlier zero-return epilogue.

### Attempt 2 notes

Removing the explicit else clauses produced the same merged-return code.

### Attempt 3 notes

A memory-clobbering test barrier prevented some merging but reloaded duration and changed branch form.

### Attempt 4 notes

The normalized project empty barrier still selected a shorter merged-return form.

### Attempt 5 notes

Inverting the second equivalent condition did not reproduce the released separate duration-return block.

## Outcome

The released event elapsed-time logic has exact shared layout and arithmetic, but available GCC merges a return block that remains separate in the target.
