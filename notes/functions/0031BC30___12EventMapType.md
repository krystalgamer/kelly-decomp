# __12EventMapType

- Address: `0x0031BC30`
- Size: `0x3C` (60 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.6667 | 61.5385 | `candidate.cpp` |
| 2 | different | 86.6667 | 61.5385 | `candidate.cpp` |
| 3 | different | 86.6667 | 61.5385 | `candidate.cpp` |
| 4 | different | 86.6667 | 61.5385 | `candidate.cpp` |
| 5 | different | 86.6667 | 61.5385 | `candidate.cpp` |

### Attempt 1 notes

The literal released forward loop reproduced all field values but scheduled pointer decrement before the branch instead of its delay slot.

### Attempt 2 notes

An explicit reverse pointer/countdown loop retained the same 86.67% scheduling mismatch.

### Attempt 3 notes

A reviewed barrier between count and pointer decrements did not change the generated schedule.

### Attempt 4 notes

Moving pointer decrement into the source loop condition retained the same instruction placement.

### Attempt 5 notes

An indexed reverse while-loop also retained the mismatch; authentic C++ consistently moves pointer decrement before the branch.

## Outcome

Five source-authentic initialization loops reached 86.67%, but isolated old GCC would not place pointer decrement in the target branch delay slot.
