# debug_mode_play_anim__22kellyslater_controller

- Address: `0x0020C740`
- Size: `0xD4` (212 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.2857 | 31.4286 | `candidate.cpp` |
| 2 | different | 98.5849 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released selection logic used an incomplete Anim declaration and allowed all three BoardAnim calls to become sibling calls.

### Attempt 2 notes

Recovered the fifth Anim parameter and blocked the BoardAnim sibling calls. Every instruction matched, with only the compressed legacy Anim symbol relocation bytes unresolved.

### Attempt 3 notes

Bound the exact legacy Anim symbol spelling. The released body then matched byte-exactly.

### Attempt 4 notes

Reused the shared source-faithful kellyslater_controller declaration for Anim, BoardAnim, and the debug globals. The integrated-context candidate remained byte-exact.

## Outcome

Matched the exact released debug animation selection with the complete five-argument Anim declaration, shared controller context, and a zero-instruction constraint preventing BoardAnim sibling calls.
