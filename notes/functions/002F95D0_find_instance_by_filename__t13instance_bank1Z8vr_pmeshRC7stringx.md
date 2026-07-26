# find_instance_by_filename__t13instance_bank1Z8vr_pmeshRC7stringx

- Address: `0x002F95D0`
- Size: `0xD4` (212 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.9245 | 37.7358 | `candidate.cpp` |
| 2 | different | 15.1786 | 5.3571 | `candidate.cpp` |
| 3 | different | 15.1786 | 5.3571 | `candidate.cpp` |
| 4 | different | 88.2075 | 84.9057 | `candidate.cpp` |
| 5 | different | 88.2075 | 84.9057 | `candidate.cpp` |

### Attempt 1 notes

The exact released filespec/ref lookup compiled the destructors out of line, producing a 168-byte body and separate helper functions.

### Attempt 2 notes

Explicitly inlined both cleanup paths, but GCC retained the filespec name pointer in an extra saved register and expanded the frame.

### Attempt 3 notes

Raw stack-offset expressions were commoned to the same saved filespec-name pointer.

### Attempt 4 notes

Using distinct add and OR stack-address forms removed the extra saved register and recovered target size. Eight initial setup instructions remained differently scheduled.

### Attempt 5 notes

A narrow post-copy scheduling barrier retained the same 88.2075% byte score and eight-instruction setup mismatch.

## Outcome

The exact released filespec/ref lookup, all four string cleanups, tree find, and target stack layout were recovered. Five candidates could not reproduce eight initial setup scheduler placements; best byte score was 88.2075%.
