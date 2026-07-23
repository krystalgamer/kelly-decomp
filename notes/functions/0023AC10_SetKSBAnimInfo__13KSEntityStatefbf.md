# SetKSBAnimInfo__13KSEntityStatefbf

- Address: `0x0023AC10`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released KSEntityState bitfield declaration and SetKSBAnimInfo body. Preserved the blend scale/conversion and KSBBlend, KSBLoop, and KSBAnimCall assignments.

## Outcome

Matched released KSEntityState::SetKSBAnimInfo body
