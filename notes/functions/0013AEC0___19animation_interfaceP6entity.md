# __19animation_interfaceP6entity

- Address: `0x0013AEC0`
- Size: `0xBC` (188 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/animation_interface.cpp`
- Reference source: `KS/SRC/animation_interface.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.5319 | 19.1489 | `candidate.cpp` |
| 2 | different | 29.2553 | 8.5106 | `candidate.cpp` |
| 3 | different | 77.6596 | 70.2128 | `candidate.cpp` |
| 4 | different | 65.9574 | 53.1915 | `candidate.cpp` |
| 5 | different | 69.1489 | 55.3191 | `candidate.cpp` |

### Attempt 1 notes

The exact released constructor with the generic map declaration produced a
168-byte function and simplified comparator copies.

### Attempt 2 notes

Using the released empty comparator removed too much constructor state and
reduced the function to 144 bytes.

### Attempt 3 notes

An explicit source-level map construction recovered the target frame, allocator
registers, and most of the initialization flow.

### Attempt 4 notes

Ordering the allocator result and header initialization improved exact prefix
matching but retained different temporary-copy scheduling.

### Attempt 5 notes

Fixed-register comparator temporaries still emitted 184 bytes and did not
reproduce the final old-STL constructor schedule.

## Outcome

Five source-level variants recovered the released map allocation and header initialization, but the original old-STL comparator temporary schedule did not match.
