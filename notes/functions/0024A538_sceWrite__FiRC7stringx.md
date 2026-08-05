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
| 1 | matched | 100.0 | 100.0 | `size36-sce-write.cpp` |

### Attempt 1 notes

The canonical overload directly forwards `stringx::c_str()` and `stringx::size()` to the SDK write routine.

## Outcome

The released stringx `sceWrite` overload matched exactly.
