# InGrindRegion__20SurfBoardObjectClass

- Address: `0x001F4670`
- Size: `0x1B8` (440 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.9375 | 52.6786 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

One-shot released-source candidate only. The function body is preserved exactly from `kelly-slaters-pro-surfer/KS/SRC/ks/board.cpp` lines 1864-1880. Minimal local declarations model `vector3d`, the board position access path, `my_board` at `0x9D4`, `lip_vec` at `0xAB0`, marker enum values, and the released `g_grind_fudge` address. No project or STL includes, alternative algorithm, annotations, source variants, retries, or diff chasing.

Target metadata: `game/files_kellyslater`, address `0x001F4670`, size `0x1B8`/440. Exactly one test invocation was permitted and run; the honest result is retained as `different` (60.9375% bytes, 52.6786% instructions). No attempts 2-5 were made. Finalized/integrated/tracked changes are false.

## Outcome

The exact released grind-region detection body differed at 60.9375% byte score; no source variant was attempted.
