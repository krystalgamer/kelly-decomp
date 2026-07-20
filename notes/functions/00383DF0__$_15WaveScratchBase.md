# _$_15WaveScratchBase

- Address: `0x00383DF0`
- Size: `0x30` (48 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty virtual destructor matched through its generated vtable restore at offset 0 and conditional `__builtin_delete`. The vtable alias uses `0x0051A728` so isolated absolute assembly reproduces the target's HI16 relocation carry while the signed LO16 addresses the real `0x0050A728` table; the trailing empty barrier preserves the framed call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released WaveScratchBase destructor matched exactly through its generated vtable restore and conditional delete.
