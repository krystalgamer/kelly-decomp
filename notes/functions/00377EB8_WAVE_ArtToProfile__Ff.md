# WAVE_ArtToProfile__Ff

- Address: `0x00377EB8`
- Size: `0x58` (88 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.7273 | 31.8182 | `candidate.cpp` |
| 2 | different | 47.7273 | 31.8182 | `candidate.cpp` |
| 3 | different | 36.3636 | 4.5455 | `candidate.cpp` |
| 4 | different | 15.9091 | 0.0 | `candidate.cpp` |
| 5 | different | 47.7273 | 31.8182 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released WAVE_ArtToProfile interpolation and WAVE_ProfileX address. The compiler omitted one integer-to-float conversion scheduling nop, producing 84 bytes.

### Attempt 2 notes

Named the converted floor value explicitly. Code generation was unchanged.

### Attempt 3 notes

Constrained the converted float through a non-emitting boundary. This changed register allocation but still emitted no target nop.

### Attempt 4 notes

Used the algebraically equivalent low + fraction*(high-low) interpolation. The compiler shortened the function substantially.

### Attempt 5 notes

Restored the released weighted interpolation with a register-qualified floor index. The original 84-byte no-nop form returned.

## Outcome

Released WAVE_ArtToProfile remained blocked by an integer-to-float scheduler nop after five source-level attempts.
