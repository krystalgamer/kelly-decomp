# OnDown__17SurferBioFrontEndi

- Address: `0x0018A388`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target sets `down_pressed` at `0x1F0` and resets `bio_counter` at `0x1F4` to `3`.

## Outcome

The target `SurferBioFrontEnd::OnDown` state changes matched exactly on the first attempt.
