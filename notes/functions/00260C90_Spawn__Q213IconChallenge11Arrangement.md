# Spawn__Q213IconChallenge11Arrangement

- Address: `0x00260C90`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_icon.cpp`
- Reference source: `KS/SRC/ks/challenge_icon.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-menu-state-core.cpp` |

### Attempt 1 notes

The initial isolated layout preserved the selected 0xa8-byte sequence.

### Attempt 2 notes

The shared arrangement declaration and a local function pointer preserve the
normal call frame without a compiler barrier.

## Outcome

The local layout and compiler barrier were removed.
