# sceWrite__FiRC7stringx

- Address: `0x0024A538`
- Size: `0x24` (36 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released overload forwards the string data pointer and stored length to the SDK write routine.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released stringx `sceWrite` overload matched exactly.
