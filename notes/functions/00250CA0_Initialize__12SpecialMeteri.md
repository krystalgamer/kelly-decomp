# Initialize__12SpecialMeteri

- Address: `0x00250CA0`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released initializer assigns `playerIdx = index` at offset `0x4`.

## Outcome

The released `SpecialMeter::Initialize` player-index setter matched exactly on the first attempt.
