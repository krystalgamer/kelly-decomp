# Init__9NamesMenu

- Address: `0x0019EDD8`
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

The released initializer copies `parent` from offset `0x64` into `sl_parent` at offset `0x170`.

## Outcome

The released `NamesMenu::Init` parent-pointer copy matched exactly on the first attempt.
