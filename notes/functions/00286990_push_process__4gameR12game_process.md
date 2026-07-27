# push_process__4gameR12game_process

- Address: `0x00286990`
- Size: `0xEC` (236 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game_process.cpp`
- Reference source: `KS/SRC/game_process.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.1356 | 13.5593 | `candidate-1-exact-released.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-2-canonical-pool.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate-3-canonical.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate-4-canonical.cpp` |

### Attempt 4 notes

Revalidated the exact released process push after extending the canonical pool-threaded list helpers, game_process methods, game process-stack layout, and central allocator declaration.

## Outcome

Matched the exact released game process push using the canonical pool-threaded old-STL list insertion, game_process methods, and process-stack layout.
