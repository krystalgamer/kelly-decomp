# nglSetProViewPS2__Fb

- Address: `0x00395E38`
- Size: `0xC` (12 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes the word-sized ProView global through a local absolute equate.

## Outcome

The released `nglSetProViewPS2` global store matched exactly on the first attempt.
