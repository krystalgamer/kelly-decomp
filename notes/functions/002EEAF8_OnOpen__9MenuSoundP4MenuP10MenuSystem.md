# OnOpen__9MenuSoundP4MenuP10MenuSystem

- Address: `0x002EEAF8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/menusound.cpp`
- Reference source: `KS/SRC/menuSound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override forwards to `Menu::OnOpen`; a barrier prevents a sibling call.

## Outcome

The released `MenuSound::OnOpen` forwarding wrapper matched exactly on the first attempt.
