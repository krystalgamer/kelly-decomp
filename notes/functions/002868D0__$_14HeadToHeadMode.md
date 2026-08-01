# _$_14HeadToHeadMode

- Address: `0x002868D0`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_headtohead.cpp`
- Reference source: `KS/SRC/ks/mode_headtohead.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.4444 | 0.0 | `head-1.cpp` |
| 2 | different | 19.4444 | 0.0 | `head-2.cpp` |
| 3 | different | 19.4444 | 0.0 | `head-3.cpp` |

## Outcome

Three native HeadToHeadMode destructor forms generated the shorter deleting-destructor sequence; the manual extern-C wrapper was removed.
