# _$_12SpecialMeter

- Address: `0x00250C78`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.5 | 90.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The destructor fixup already applies the negative-low %hi carry; the first alias pre-carried it and overshot the target high half.

### Attempt 2 notes

A symbol-preserving destructor restores the `SpecialMeter` vtable before delegating to `EventRecipient`; the generalized destructor fixup supplies the negative-low `%hi` carry.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `SpecialMeter` destructor matched exactly.
