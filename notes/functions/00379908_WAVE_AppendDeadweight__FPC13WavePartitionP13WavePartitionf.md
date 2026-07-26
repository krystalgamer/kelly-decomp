# WAVE_AppendDeadweight__FPC13WavePartitionP13WavePartitionf

- Address: `0x00379908`
- Size: `0xD4` (212 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.6792 | 86.7925 | `candidate.cpp` |
| 2 | different | 88.6792 | 86.7925 | `candidate.cpp` |
| 3 | different | 18.5185 | 5.5556 | `candidate.cpp` |
| 4 | different | 23.6607 | 8.9286 | `candidate.cpp` |
| 5 | different | 88.6792 | 86.7925 | `candidate.cpp` |

### Attempt 1 notes

The exact released partition copy, restriction, and deadweight append matched every instruction after the prologue; seven save/move placements differed.

### Attempt 2 notes

A zero-instruction end constraint did not alter the prologue.

### Attempt 3 notes

Pinned output and weight registers with an explicit constraint, expanding the function and disturbing allocation.

### Attempt 4 notes

Fixed register declarations without a constraint still expanded the function.

### Attempt 5 notes

Factoring the range expression retained target size and the best 88.6792% score; the same seven prologue placements remained.

## Outcome

The exact released partition copy, restriction, guide/guidestep/weight append, and count increment matched every instruction after the prologue. Five candidates could not reproduce seven save/move placements; best byte score was 88.6792%.
