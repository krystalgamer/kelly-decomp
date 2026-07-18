# Init__Q213IconChallenge4TaskPQ213IconChallenge4IconQ313IconChallenge4Task4TYPE

- Address: `0x00261078`
- Size: `0x14` (20 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_icon.cpp`
- Reference source: `KS/SRC/ks/challenge_icon.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released initializer stores `icon` at `0x0`, `type` at `0x8`, and clears `completed`/`watchChain` at `0x4`/`0xC`.

## Outcome

The released `IconChallenge::Task::Init` assignments matched exactly on the first attempt.
