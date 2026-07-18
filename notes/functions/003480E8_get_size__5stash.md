# get_size__5stash

- Address: `0x003480E8`
- Size: `0xC` (12 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor loads `index` at offset `0x0` and returns its size at offset `0x24`.

## Outcome

The released `stash::get_size` nested load matched exactly on the first attempt.
