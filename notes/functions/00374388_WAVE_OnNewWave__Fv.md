# WAVE_OnNewWave__Fv

- Address: `0x00374388`
- Size: `0xD8` (216 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 64.7059 | `candidate.cpp` |
| 2 | different | 93.0556 | 63.4615 | `candidate.cpp` |
| 3 | different | 93.0556 | 63.4615 | `candidate.cpp` |
| 4 | different | 65.7895 | 63.6364 | `candidate.cpp` |
| 5 | different | 93.0556 | 63.4615 | `candidate.cpp` |

### Attempt 1 notes

Exact released body with authentic virtual hierarchy and global layouts. The
controller dispatch, beach call, helper calls, globals, and structure stride all
matched. Differences were the emitter-loop branch scheduling and a tail call to
BLUR_TurnOn; score 83.3333% bytes / 64.7059% instructions.

### Attempt 2 notes

Added a zero-width compiler barrier after BLUR_TurnOn to suppress the unwanted
tail call. Everything outside the emitter loop then matched exactly, including
the target size. The remaining difference was canonical index-loop scheduling:
candidate emitted a leading nop and ordinary branch; target uses a peeled store
and branch-likely store. Score 93.0556% bytes / 63.4615% instructions.

### Attempt 3 notes

Recast the released index loop as an equivalent pointer do/while over the same
51-element array. GCC canonicalized it back to the same loop as attempt 2, so
the score and assembly were unchanged: 93.0556% bytes / 63.4615% instructions.

### Attempt 4 notes

Explicitly peeled the first emitter store and used a preincrement pointer loop to
mirror the target's apparent software-pipelined form. GCC retained an extra
entry guard and changed later register allocation, producing 228 bytes and a
65.7895% byte / 63.6364% instruction score.

### Attempt 5 notes

Restored the canonical released index loop but used postincrement, retaining the
zero-width post-BLUR barrier. This distinct source candidate reproduced attempt
2's best 216-byte output. All instructions outside the loop matched; the target
peels the first store and uses a branch-likely delay-slot store, while this EE
GCC invocation emits a leading nop and ordinary branch. Score 93.0556% bytes /
63.4615% instructions.

## Outcome

Deferred after five source-level attempts. The released new-wave handler reached 93.0556% and exact size; only the legacy branch-likely emitter-loop schedule remained unmatched.
