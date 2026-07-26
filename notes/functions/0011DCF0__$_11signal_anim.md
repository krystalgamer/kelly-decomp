# _$_11signal_anim

- Address: `0x0011DCF0`
- Size: `0xD8` (216 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/signal_anim.cpp`
- Reference source: `KS/SRC/signal_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.0175 | 16.6667 | `candidate.cpp` |
| 2 | different | 31.9444 | 14.0 | `candidate.cpp` |
| 3 | different | 32.0175 | 16.6667 | `candidate.cpp` |
| 4 | different | 32.0175 | 16.6667 | `candidate.cpp` |
| 5 | different | 31.9444 | 14.0 | `candidate.cpp` |

### Attempt 1 notes

The recovered vector destructor used different iterator and allocator registers, emitted 228 bytes, and tail-called deleting cleanup.

### Attempt 2 notes

A memory boundary after the trivial element loop shortened the function but did not recover the vector deallocation schedule.

### Attempt 3 notes

A dead output after the loop restored the original 228-byte shape.

### Attempt 4 notes

An explicit while iterator generated the same code as the original for loop.

### Attempt 5 notes

A final memory boundary again shortened the function. Best byte score was 32.0175%.

## Outcome

Recovered the signal animation vtable reset, vector element traversal, allocator threshold/free-list return, and deleting path. Five candidates could not reproduce the shipped vector destructor schedule; best byte score was 32.0175%.
