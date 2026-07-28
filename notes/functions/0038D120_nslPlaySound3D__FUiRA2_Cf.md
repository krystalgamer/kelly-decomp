# nslPlaySound3D__FUiRA2_Cf

- Address: `0x0038D120`
- Size: `0x164` (356 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.1461 | 2.2472 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

Tested the released `nslPlaySound3D` body once. The candidate differed: 29/356 bytes (8.1461%) and 2/89 instructions (2.2472%); candidate size 140 bytes versus target size 356 bytes. No variants or retries were attempted.

## Outcome

The exact released NSL 3D-sound player differed from the target; the sole attempt scored 8.1461%.
