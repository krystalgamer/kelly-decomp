# reset__5trail

- Address: `0x00361DB8`
- Size: `0xD8` (216 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.1207 | 13.7931 | `candidate.cpp` |
| 2 | different | 83.7963 | 81.4815 | `candidate.cpp` |
| 3 | different | 93.0556 | 92.5926 | `candidate.cpp` |
| 4 | different | 93.0556 | 92.5926 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempted the exact released `trail::reset` body with faithful released trail, node,
surface, wave-hint, spray-control, and spray-parameter declarations. All member
offsets and the entire spray reset sequence matched, but the compiler indexed the
first node loop with a multiply instead of the target's pointer induction and
inserted one nop before the spray-control loop.

### Attempt 2 notes

Replaced only the first released array-index loop with equivalent pointer
induction. This produced the exact 216-byte size and made the complete spray
half byte-identical, but the pointer was initialized too early, advanced before
the comparison, and allocated to `$a2` rather than the target's `$v1`.

### Attempt 3 notes

Expressed the first loop as a zero-count guard plus pointer-based `do/while`.
This matched 50/54 instructions and all bytes outside four loop-scheduling
positions. The remaining mismatch is solely that `$v1 += 0x6d8` occurs before
the count reload instead of in the target branch delay slot.

### Attempt 4 notes

Moved the pointer advance into the node-store post-increment. The compiler
canonicalized it to the same schedule as attempt 3, retaining the 93.0556 byte
score and 50/54 instruction match.

### Attempt 5 notes

Kept the released reset operations and expressed the node walk as a guarded
pointer loop whose advance is the right operand of the continuation condition.
This preserves the released behavior while placing `$v1 += 0x6d8` in the branch
delay slot. The result matches all 216 bytes and all 54 instructions exactly.

## Outcome

Matched the released trail reset with consolidated wave, surface-point, spray-control, and trail member declarations plus the source-equivalent node iteration schedule.
