# nslGetListenerPo__FPA3_A3_f

- Address: `0x00390948`
- Size: `0x30` (48 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.8889 | 5.5556 | `candidate.cpp` |
| 2 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 3 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 4 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released 64-byte builtin memcpy with the listener matrix at the recovered global address. Without destination alignment carried through the isolated type, EE GCC expanded it into unaligned LDL/LDR and SDL/SDR pairs (144 bytes).

### Attempt 2 notes

Added the released 16-byte alignment attribute to `nlMatrix4x4`. EE GCC improved the copy to eight 64-bit LD/SD pairs, but did not select the target's four 128-bit LQ/SQ pairs.

### Attempt 3 notes

Called a declared `memcpy` exactly as the released source does. Builtin expansion remained identical to attempt 2 at 76 bytes.

### Attempt 4 notes

Recast the matrix as four aligned TI-mode quadwords behind an ABI-named wrapper. This compiler still expanded the 64-byte copy as eight 64-bit transfers rather than four quadword transfers.

### Attempt 5 notes

The released operation is a 64-byte memcpy from `nsl.listenerPo` to the destination. Instruction-emitting inline assembly is limited to that exact copy because the isolated EE GCC consistently expands the aligned memcpy into eight 64-bit transfers rather than the target's four 128-bit transfers; these ten instructions reproduce only the target address setup and LQ/SQ copy sequence.

## Outcome

The released NSL listener-matrix memcpy matched exactly with the target's 128-bit copy expansion.
