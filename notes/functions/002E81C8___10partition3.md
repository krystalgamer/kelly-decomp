# __10partition3

- Address: `0x002E81C8`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/terrain.cpp`
- Reference source: `KS/SRC/terrain.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released default constructor initializes `my_sector` at offset `0x10` to `NULL` and returns `this`.

## Outcome

The released `partition3` default constructor matched exactly on the first attempt.
