# Reset__Q213IconChallenge4Task

- Address: `0x00261060`
- Size: `0x18` (24 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_icon.cpp`
- Reference source: `KS/SRC/ks/challenge_icon.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released reset clears icon/completion/watch fields and assigns `TYPE_NONE` (`13`) at offset `0x8`.

## Outcome

The released `IconChallenge::Task::Reset` assignments matched exactly on the first attempt.
