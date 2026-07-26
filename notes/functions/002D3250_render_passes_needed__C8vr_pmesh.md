# render_passes_needed__C8vr_pmesh

- Address: `0x002D3250`
- Size: `0xE4` (228 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.678 | 26.6667 | `candidate.cpp` |
| 2 | different | 66.2281 | 55.1724 | `candidate.cpp` |
| 3 | different | 64.9123 | 53.4483 | `candidate.cpp` |
| 4 | different | 53.5088 | 36.8421 | `candidate.cpp` |
| 5 | different | 60.5263 | 47.3684 | `candidate.cpp` |

### Attempt 1 notes

Compiled the exact released body with source-faithful visual-rep, pmesh, STL container, material, and string-buffer declarations. All object offsets and material/map tests matched, but GCC formed an extra initial loop preheader branch/nop and a different loop-back load schedule, producing 236 bytes instead of 228.

### Attempt 2 notes

Rewrote the outer material traversal as an explicit source-equivalent do/while. This removed the extra function bytes and produced exact size, but the compiler inverted the empty-material check into a branch-to-body plus explicit return path and used full-width pointer indexing instead of the released short-index sign-extension sequence.

### Attempt 3 notes

Pinned the outer index to `$s1`, used the released short-index accessor, and kept a fallthrough `goto done` form. The compiler still hoisted the material-vector start pointer outside the loop, forcing the same preheader branch and choosing an in-place post-inner decrement instead of the target's saved next index.

### Attempt 4 notes

Forced a material-vector reload and explicit next index in the do/while form. This removed the preheader and exposed the target loop reload, but it decremented `$s1` in place, omitted the target saved-next-index moves and environment-map hazard nop, and shortened the function to 220 bytes.

### Attempt 5 notes

Returned to the exact released for-loop and added only a zero-instruction memory barrier before material lookup to prevent vector-start hoisting. The barrier removed part of the preheader but changed count/exit scheduling and shortened the function to 224 bytes. Attempt 2 remains the best exact-size candidate.

## Outcome

Deferred after five source-level attempts. The released pmesh render-pass logic and all material/string offsets are recovered at target size, but GCC2 rotates and hoists the outer material loop differently from the shipped instruction schedule.
