# nslSceVu0UnitMatrix__FPA3_f

- Address: `0x00391718`
- Size: `0x2C` (44 bytes)
- Object: `nsl/nl_ps2`
- Debug source: `C:/NSL/PS2/nl_ps2.cpp`
- Reference source: `NSL/PS2/nl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.2727 | 72.7273 | `candidate.cpp` |
| 2 | different | 77.2727 | 72.7273 | `candidate.cpp` |
| 3 | different | 77.2727 | 72.7273 | `candidate.cpp` |

### Attempt 1 notes

The exact released VU inline assembly moves the final `sqc2` into the return
delay slot and emits 40 bytes.

### Attempt 2 notes

Splitting the released sequence across volatile blocks retains the same delay
slot.

### Attempt 3 notes

The source-faithful aligned matrix form retains the same 40-byte schedule.

## Outcome

The prior match added an explicit nop not present in released source. It was
removed and the helper was deferred.
