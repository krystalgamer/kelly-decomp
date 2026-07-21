# read__9text_filePc

- Address: `0x00337CE0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/textfile.cpp`
- Reference source: `KS/SRC/textfile.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 2 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 3 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 4 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 5 | different | 86.6667 | 86.6667 | `candidate.cpp` |

### Attempt 1 notes

The literal released whitespace/read/store body matched 13 of 15 instructions; only s0 setup versus s1 save scheduling differed.

### Attempt 2 notes

Named output and character locals retained the same 86.67% two-instruction schedule mismatch.

### Attempt 3 notes

An explicit source receiver using the released symbol retained the same schedule.

### Attempt 4 notes

Holding read_char as an int before the byte store did not alter register preservation order.

### Attempt 5 notes

A source reference to this also retained the identical mismatch; authentic C++ consistently initializes s0 before saving s1.

## Outcome

Five source-authentic forms reached 86.67%, but isolated old GCC consistently schedules s0 setup before the target s1 save.
