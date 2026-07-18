# Init__12KeyboardMenu

- Address: `0x001A1CF8`
- Size: `0xC` (12 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released initializer copies `parent` from offset `0x64` into `sl_parent` at offset `0x20C`.

## Outcome

The released `KeyboardMenu::Init` parent-pointer copy matched exactly on the first attempt.
