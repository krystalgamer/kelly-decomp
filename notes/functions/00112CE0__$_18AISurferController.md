# _$_18AISurferController

- Address: `0x00112CE0`
- Size: `0x28` (40 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.h`
- Reference source: `KS/SRC/AIController.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `ai_surfer_dtor_candidate.cpp` |
| 2 | different | 20.8333 | 16.6667 | `ai_surfer_dtor_2.cpp` |
| 3 | different | 31.8182 | 18.1818 | `ai_surfer_dtor_3.cpp` |
| 4 | different | 34.0909 | 27.2727 | `ai_surfer_dtor_4.cpp` |
| 5 | different | 20.8333 | 16.6667 | `ai_surfer_dtor_5.cpp` |

### Attempt 1 notes

The symbol-preserving wrapper emitted the correct call shape, but the vtable
absolute lacked the old assembler carry bias and the prologue/body schedule
did not match.

Re-evaluating this identical first candidate after the generalized EE destructor fixup now produces an exact match; this infrastructure recheck does not consume a sixth source attempt.

### Attempt 2 notes

Separating a high-page constant from the vtable offset caused EE GCC to
materialize a second full constant and preserve `this` in an extra register.

### Attempt 3 notes

Producing the vtable high half through inline assembly still introduced an
extra `this` save/restore move around the base-destructor call.

### Attempt 4 notes

Binding the vtable address to `v0` recovered the target registers, but the
compiler copied `this` before the RA save and restored `a0`, producing eleven
instructions instead of ten.

### Attempt 5 notes

Using an external page symbol to prevent constant folding still generated an
extra address materialization and `this` preservation sequence. The target
compiler-generated destructor schedule remains authoritative.

## Outcome

The original source-shaped destructor matched after the EE object fixup restored the released vtable carry and prologue schedule.
