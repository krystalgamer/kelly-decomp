# __Q214IGOIconManager4Icon

- Address: `0x00163C78`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igoiconmanager.cpp`
- Reference source: `KS/SRC/ks/igoiconmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor clears `resource` at `0x64`, sets `show` at `0x78`, and returns `this`.

## Outcome

The released `IGOIconManager::Icon` constructor matched exactly on the first attempt.
