# GetLocation3D__10TextString

- Address: `0x001D8778`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released compatibility accessor constructs a zero vector in the hidden return object and returns it.

## Outcome

The released `TextString::GetLocation3D` zero aggregate return matched exactly on the first attempt.
