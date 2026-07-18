# GetScore__C15MeterAttackModei

- Address: `0x00286748`
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

The released accessor indexes 24-byte player records and returns score at record offset `0xC`.

## Outcome

The released `MeterAttackMode::GetScore` indexed load matched exactly on the first attempt.
