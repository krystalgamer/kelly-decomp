# SpeedNormal__8KSReplay

- Address: `0x0023CA58`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 75.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate matched control flow but EE GCC reversed the two independent zero stores in the fast-forward path.

### Attempt 2 notes

The target preserves deferred speed changes. Assigning `fastforward` before
`slomo` is semantically equivalent and naturally reproduces the target stores.

## Outcome

The shared `KSReplay` transition matches without a compiler barrier.
