# getText__10TextString

- Address: `0x001D86F8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places the stored string at offset four and returns it through the released copy constructor.

## Outcome

The released `TextString::getText` implementation matched exactly.
