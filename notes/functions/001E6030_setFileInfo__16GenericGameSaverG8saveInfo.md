# setFileInfo__16GenericGameSaverG8saveInfo

- Address: `0x001E6030`
- Size: `0xC0` (192 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.1154 | 34.6154 | `candidate.cpp` |
| 2 | different | 48.0769 | 36.5385 | `candidate.cpp` |
| 3 | different | 47.1154 | 34.6154 | `candidate.cpp` |
| 4 | different | 47.1154 | 34.6154 | `candidate.cpp` |
| 5 | different | 47.1154 | 34.6154 | `candidate.cpp` |

### Attempt 1 notes

The exact semaphore and assignment body generated equivalent aggregate-copy
loops, but EE GCC emitted four extra loop scheduling nops and different copy
registers.

### Attempt 5 notes

Register binding, memcpy, compiler barriers, and a const-reference source all
retained the 208-byte aggregate-copy form.

## Outcome

Five source-level assignment forms retained a 208-byte aggregate-copy schedule instead of the target's 192-byte loops.
