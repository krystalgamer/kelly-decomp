# GetPlayerShare__C8PushModei

- Address: `0x00285B70`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_push.cpp`
- Reference source: `KS/SRC/ks/mode_push.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the released accessor indexes 32-byte player records and returns `share` at record offset `0x0`.

## Outcome

The released `PushMode::GetPlayerShare` indexed load matched exactly on the first attempt.
