# mem_get_total_mem__Fi

- Address: `0x002ACB20`
- Size: `0x44` (68 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.0588 | 88.2353 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Attempt one used the exact released heap accessor. Reversing the commutative source operands after inspecting the two swapped loads reproduces the released register assignment exactly.

## Outcome

The released heap memory total accessor matches exactly.
