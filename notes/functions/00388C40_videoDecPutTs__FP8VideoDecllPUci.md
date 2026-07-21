# videoDecPutTs__FP8VideoDecllPUci

- Address: `0x00388C40`
- Size: `0x3C` (60 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.3333 | 73.3333 | `candidate.cpp` |
| 2 | different | 78.3333 | 73.3333 | `candidate.cpp` |
| 3 | different | 66.6667 | 60.0 | `candidate.cpp` |
| 4 | different | 46.6667 | 40.0 | `candidate.cpp` |
| 5 | different | 78.3333 | 73.3333 | `candidate.cpp` |

### Attempt 1 notes

Authentic TimeStamp assignment variants emitted overlapping quadword stores instead of the target doubleword stores and could not match scheduling.

### Attempt 2 notes

Authentic TimeStamp assignment variants emitted overlapping quadword stores instead of the target doubleword stores and could not match scheduling.

### Attempt 3 notes

Authentic TimeStamp assignment variants emitted overlapping quadword stores instead of the target doubleword stores and could not match scheduling.

### Attempt 4 notes

Authentic TimeStamp assignment variants emitted overlapping quadword stores instead of the target doubleword stores and could not match scheduling.

### Attempt 5 notes

Authentic TimeStamp assignment variants emitted overlapping quadword stores instead of the target doubleword stores and could not match scheduling.

## Outcome

Authentic timestamp construction variants selected overlapping quadword stores rather than the target doubleword stores; deferred after five attempts.
