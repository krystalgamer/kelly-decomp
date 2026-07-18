# Record__8KSReplay

- Address: `0x0023C690`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method assigns `REPLAY_RECORD` (`1`) to `status` at offset `0x10`.

## Outcome

The released `KSReplay::Record` status assignment matched exactly on the first attempt.
