# ExitState__15FEEntityManager

- Address: `0x001C4C70`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEEntityManager.cpp`
- Reference source: `KS/SRC/ks/FEEntityManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method copies `cur_state` at `0x240` to `last_state` at `0x244`, then assigns `STATE_OTHER_SET` (`6`).

## Outcome

The released `FEEntityManager::ExitState` state transition matched exactly on the first attempt.
