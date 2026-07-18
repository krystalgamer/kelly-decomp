# get_name__C5stash

- Address: `0x003480D0`
- Size: `0x8` (8 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns a reference to `fullname` at offset `0x18`.

## Outcome

The released `stash::get_name` address calculation matched exactly on the first attempt.
