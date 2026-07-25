# mem_memalign__FUiUiPCcii

- Address: `0x002AC848`
- Size: `0xB4` (180 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.1111 | 86.6667 | `candidate.cpp` |
| 2 | different | 95.5556 | 95.5556 | `candidate.cpp` |
| 3 | different | 46.1957 | 30.4348 | `candidate.cpp` |
| 4 | different | 95.5556 | 95.5556 | `candidate.cpp` |
| 5 | different | 90.0 | 88.8889 | `candidate.cpp` |

### Attempt 1 notes

The released preprocessed allocator body and shared Heap/semaphore declarations matched target size; differences were the boundary/flags saved-register assignment and the target's fatal mem_error flag, which differs from the released source snapshot.

### Attempt 2 notes

Using the target fatal flag and binding boundary and allocation flags to their target registers matched every instruction except the order of one saved-register store and one parameter move.

### Attempt 3 notes

Representing the semaphore global through a saved high-address register added a materialization and disrupted the call schedule.

### Attempt 4 notes

The released source line context left the two independent prologue instructions unchanged.

### Attempt 5 notes

An empty source scheduling boundary between the flags and boundary locals moved additional prologue instructions without producing the target pair order.

## Outcome

Deferred aligned memory allocation after five source-level attempts; released shared declarations reproduced all but two independent prologue scheduling instructions.
