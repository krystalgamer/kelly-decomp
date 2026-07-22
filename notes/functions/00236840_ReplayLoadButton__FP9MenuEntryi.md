# ReplayLoadButton__FP9MenuEntryi

- Address: `0x00236840`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.5 | 90.0 | `candidate.cpp` |
| 2 | different | 88.75 | 90.0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Modeled the immutable replay load path, including action==7, KSReplay::LoadFile, replay object access, and the indirect member callback. The candidate matched 18/20 instructions but differed in call delay-slot scheduling.

### Attempt 2 notes

Tried expressing LoadFile as a KSReplay member call to reproduce the immutable call order. The compiler emitted an extra local thunk and retained the differing call relocation/scheduling.

### Attempt 3 notes

Retried with a local replay pointer to influence argument scheduling, but the candidate failed to compile due to a local variable name collision. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 reproduced ReplayLoadButton behavior and the indirect replay callback, but exact call scheduling remained different and the third source variant failed compilation due to a local naming collision. No fourth attempt was run.
