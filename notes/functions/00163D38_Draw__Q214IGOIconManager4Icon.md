# Draw__Q214IGOIconManager4Icon

- Address: `0x00163D38`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igoiconmanager.cpp`
- Reference source: `KS/SRC/ks/igoiconmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.5 | 80.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Placing the compiler barrier after the conditional merged both returns; the target restores RA separately on the hidden and drawn paths.

### Attempt 2 notes

The released icon stores its quad at object offset zero and submits it only when the show flag at 0x78 is set.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released IGO icon draw wrapper matched exactly.
