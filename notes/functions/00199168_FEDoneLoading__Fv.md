# FEDoneLoading__Fv

- Address: `0x00199168`
- Size: `0x18` (24 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor reaches `frontendmanager.fe_done_loading` through the large object offset `0x1567C`.

## Outcome

The released `FEDoneLoading` large-offset global load matched exactly on the first attempt.
