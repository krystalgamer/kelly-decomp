# _$_9signaller

- Address: `0x0034CC90`
- Size: `0xD4` (212 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.5517 | 25.8621 | `candidate.cpp` |
| 2 | different | 57.5472 | 39.6226 | `candidate.cpp` |
| 3 | different | 49.0566 | 28.3019 | `candidate.cpp` |
| 4 | different | 53.7736 | 32.0755 | `candidate.cpp` |
| 5 | different | 34.0909 | 12.7273 | `candidate.cpp` |

### Attempt 1 notes

The released destructor flow used an extra saved register, a 96-byte frame, and a sibling delete call because of the raw list local.

### Attempt 2 notes

Removing the list local and blocking the final sibling call recovered the 80-byte frame and target size; best score was 57.5472%.

### Attempt 3 notes

Pinning both self and delete flags changed the loop and epilogue register assignment.

### Attempt 4 notes

Pinning only self recovered target size but retained a different signal-list pointer schedule.

### Attempt 5 notes

Restoring a raw delete-flags register expanded the frame and did not recover the shipped destructor schedule.

## Outcome

Recovered the released signal deletion loop, signal-list cleanup, vtable reset, and deleting-destructor path. Five candidates could not reproduce the shipped list-pointer and epilogue register schedule; best byte score was 57.5472%.
