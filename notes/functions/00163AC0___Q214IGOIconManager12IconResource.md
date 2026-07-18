# __Q214IGOIconManager12IconResource

- Address: `0x00163AC0`
- Size: `0x18` (24 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igoiconmanager.cpp`
- Reference source: `KS/SRC/ks/igoiconmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor clears `texture`, sets `trickIdx` to `-1`, clears byte `timesDisplayed` at `0xC`, and returns `this`.

## Outcome

The released `IGOIconManager::IconResource` constructor matched exactly on the first attempt.
