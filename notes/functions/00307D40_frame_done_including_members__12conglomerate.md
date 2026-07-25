# frame_done_including_members__12conglomerate

- Address: `0x00307D40`
- Size: `0x90` (144 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/conglom.cpp`
- Reference source: `KS/SRC/conglom.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.3846 | 2.5641 | `candidate.cpp` |
| 2 | different | 95.1389 | 80.5556 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released recursive member frame completion matched after caching vector bounds and binding each virtual-call vtable/function register pair.

## Outcome

The released function matched exactly.
