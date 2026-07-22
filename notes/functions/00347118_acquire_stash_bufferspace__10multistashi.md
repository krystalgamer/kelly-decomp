# acquire_stash_bufferspace__10multistashi

- Address: `0x00347118`
- Size: `0x48` (72 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.8333 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released memalign behavior, member offsets, alignment, and assignment order matched instruction-for-instruction. Only the isolated candidate could not place the compiler-generated __PRETTY_FUNCTION__ descriptor at its linked address.

### Attempt 2 notes

Reused the released descriptor through a fixed link alias while preserving the original arch_memalign call semantics. This resolves the immutable linked string context and matches exactly.

## Outcome

The released stash buffer allocation matches exactly with shared multistash layout and its immutable compiler descriptor alias.
