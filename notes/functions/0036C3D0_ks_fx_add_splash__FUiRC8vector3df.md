# ks_fx_add_splash__FUiRC8vector3df

- Address: `0x0036C3D0`
- Size: `0xD4` (212 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.6207 | 22.4138 | `candidate.cpp` |
| 2 | different | 37.2951 | 26.2295 | `candidate.cpp` |
| 3 | different | 78.1818 | 70.9091 | `candidate.cpp` |
| 4 | different | 90.0943 | 86.7925 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released splash flow used POD vector copies and inaccurate adjusted global addresses, producing block-copy argument setup and a larger tail.

### Attempt 2 notes

Adding a source vector copy constructor expanded both by-value argument copies.

### Attempt 3 notes

Declared the particle helper with pointer ABI and built both stack vectors field by field. This matched through the helper call and recovered 78.1818%.

### Attempt 4 notes

Pinned the selected particle, texture, and flag mask, recovering target size and 90.0943%.

### Attempt 5 notes

Kept the recovered pointer ABI but allowed normal local register allocation for the final particle update. The exact released flow matched byte-exactly.

## Outcome

Matched the exact released loose-particle splash flow using the recovered pointer ABI for the two vector arguments, corrected adjusted globals, and source-faithful particle field layout.
