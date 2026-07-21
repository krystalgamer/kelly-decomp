# clear_callback_references__Q213script_object8instanceP15script_callback

- Address: `0x00350AB0`
- Size: `0x44` (68 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.5294 | 0.0 | `candidate.cpp` |
| 2 | different | 37.5 | 16.6667 | `candidate.cpp` |
| 3 | different | 48.5294 | 35.2941 | `candidate.cpp` |
| 4 | different | 23.5294 | 5.8824 | `candidate.cpp` |
| 5 | different | 36.1111 | 11.1111 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released loop with abbreviated list nodes; behavior matched but STL iterator stack state was optimized away.

### Attempt 2 notes

Forced the end iterator address into a narrow empty barrier; GCC added a reload and changed branch layout.

### Attempt 3 notes

Staged the empty check before the barrier and used a do loop; frame and control flow still differed.

### Attempt 4 notes

Modeled the released iterator class and operators directly; GCC again optimized the iterator objects away.

### Attempt 5 notes

Combined the iterator class with an end-iterator barrier; GCC retained an extra reload absent from the target.

## Outcome

Deferred after five original-source and STL-iterator attempts; callback clearing behavior and offsets match, but the released iterator spill cannot be reproduced without extra reloads.
