# find_object__C14script_managerRC7stringx

- Address: `0x003525B8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.0 | 80.0 | `candidate.cpp` |
| 2 | different | 75.0 | 62.5 | `candidate.cpp` |
| 3 | different | 85.0 | 80.0 | `candidate.cpp` |

### Attempt 1 notes

Iterator/result variants produced equivalent logic but selected a branch-likely return layout.

### Attempt 2 notes

Iterator/result variants produced equivalent logic but selected a branch-likely return layout.

### Attempt 3 notes

Iterator/result variants produced equivalent logic but selected a branch-likely return layout.

## Outcome

The matching-only barrier and local map layout were removed. Native iterator
forms fold the found return into a branch-likely sequence, so the lookup was
deferred.
