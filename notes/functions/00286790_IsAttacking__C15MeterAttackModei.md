# IsAttacking__C15MeterAttackModei

- Address: `0x00286790`
- Size: `0x14` (20 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_meterattack.cpp`
- Reference source: `KS/SRC/ks/mode_meterattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor indexes 24-byte player records and returns the word-sized attacking flag at record offset `0x10`.

## Outcome

The released `MeterAttackMode::IsAttacking` indexed load matched exactly on the first attempt.
