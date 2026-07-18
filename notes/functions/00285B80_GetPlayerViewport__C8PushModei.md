# GetPlayerViewport__C8PushModei

- Address: `0x00285B80`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_push.cpp`
- Reference source: `KS/SRC/ks/mode_push.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.0 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

With assertions removed, the released accessor indexes 32-byte player records and returns `viewport` at record offset `0x8`. Correcting the record tail padding matched on attempt two.

## Outcome

The released `PushMode::GetPlayerViewport` address calculation matched on attempt two with the 32-byte player record layout.
