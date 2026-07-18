# DialogActive__16SaveLoadFrontEnd

- Address: `0x0019BF38`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate compares `active` at `0x60` with `dialogMenu` at `0x32FC`.

## Outcome

The released `SaveLoadFrontEnd::DialogActive` pointer comparison matched exactly on the first attempt.
