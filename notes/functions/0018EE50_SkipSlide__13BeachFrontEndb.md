# SkipSlide__13BeachFrontEndb

- Address: `0x0018EE50`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BeachFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places `panel` at offset 0x100; the released body forwards to `PanelFile::ForceDoneSlide`.

## Outcome

The released `BeachFrontEnd::SkipSlide` wrapper matched exactly on the first attempt.
