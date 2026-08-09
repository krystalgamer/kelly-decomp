# shutdown__11movieplayer

- Address: `0x001E6B30`
- Size: `0x30` (48 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_movieplayer.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_movieplayer.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size48-ps2-core.cpp` |

### Attempt 1 notes

The explicit high-resolution early return reproduces the RA restore in the branch delay slot; the trailing barrier preserves the normal second NVL shutdown call.

### Attempt 2 notes

The shared movieplayer declaration and a local function pointer preserve the
normal stream shutdown call without a compiler barrier.

## Outcome

The local layout and compiler barrier were removed.
