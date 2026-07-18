# resurrect__10controller

- Address: `0x0026E9B0`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `controller.h`
- Reference source: `KS/SRC/controller.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline method sets the word-sized `active` flag at offset `0x0`.

## Outcome

The released `controller::resurrect` flag set matched exactly on the first attempt.
