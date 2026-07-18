# getActiveCard__16SaveLoadFrontEnd

- Address: `0x0019B668`
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

The released accessor loads `NameMenu` at offset `0x32F4` and its `active_card` at offset `0x1FC`.

## Outcome

The released `SaveLoadFrontEnd::getActiveCard` forwarding accessor matched exactly on the first attempt.
