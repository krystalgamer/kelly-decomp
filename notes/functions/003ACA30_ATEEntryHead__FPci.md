# ATEEntryHead__FPci

- Address: `0x003ACA30`
- Size: `0x14` (20 bytes)
- Object: `ngl/ngl_ate`
- Debug source: `C:/NGL/ps2/ngl_ate.cpp`
- Reference source: `NGL/PS2/ngl_ate.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released helper returns the head of a 48-byte indexed entry after a 16-byte header.

## Outcome

The released `ATEEntryHead` address calculation matched exactly on the first attempt.
