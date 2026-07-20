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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released getter constructs the hidden return `stringx` from the initials buffer at offset 0x1c; the explicit one-word copy constructor preserves old-GCC return ABI.

## Outcome

The released `Career::GetInitials` implementation matched exactly on the first attempt.
