# GetInitials__6Career

- Address: `0x0025AB80`
- Size: `0x30` (48 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size48-gameplay-core.cpp` |

### Attempt 1 notes

The shared career and `stringx` declarations construct the hidden return from
the initials buffer at offset 0x1c.

## Outcome

The local return layout was removed.
