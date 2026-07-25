# ks_fx_start_wipeout_splash__Fi

- Address: `0x0036B120`
- Size: `0xB8` (184 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released wipeout splash loop matches exactly using the shared game,
replay, timer, and splash declarations.

## Outcome

Released wipeout splash allocation, replay notification, and timer capture reproduce the target exactly.
