# Reset__14TimeAttackMode

- Address: `0x002860D0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_timeattack.cpp`
- Reference source: `KS/SRC/ks/mode_timeattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.8261 | 8.6957 | `candidate.cpp` |
| 2 | different | 78.3333 | 60.0 | `candidate.cpp` |
| 3 | different | 35.2941 | 5.8824 | `candidate.cpp` |
| 4 | different | 39.7059 | 5.8824 | `candidate.cpp` |
| 5 | different | 37.5 | 12.5 | `candidate.cpp` |

### Attempt 1 notes

The literal released indexed PLAYER loop used separate induction registers and expanded to 92 bytes.

### Attempt 2 notes

A single PLAYER pointer recovered the 60-byte countdown loop, but used the player base with positive offsets rather than the target attackScore base.

### Attempt 3 notes

Adding an explicit attackScore induction pointer retained multiple bases and expanded the loop.

### Attempt 4 notes

A single integer tail pointer split the float stores into another induction base and emitted 68 bytes.

### Attempt 5 notes

A byte-pointer representation still emitted 64 bytes and did not reproduce the target common-base scheduling.

## Outcome

Five source-authentic reset loop forms could not reproduce the target common attackScore-base induction; the closest correct form reached 78.33%.
