# MoveForwardOnX__20SurfBoardObjectClassf

- Address: `0x001F9BD0`
- Size: `0xFC` (252 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.9242 | 7.5758 | `candidate.cpp` |

### Attempt 1 notes

# MoveForwardOnX__20SurfBoardObjectClassf first pass

- Queue was clean and pending with zero attempts; no pre-existing target scratch existed.
- Tested exactly the released body from `board.cpp:3078-3095`.
- Used authentic narrow `vector3d`, `SimpleForce`, and `PhysicsObjectClass`
  declarations and the released surfboard field order/offsets through `lip_vec`.
- Result: **different** — byte score 29.9242%, instruction score 7.5758%;
  candidate size 264 bytes versus target size 252 bytes.
- No second candidate or diff chasing was performed.

## Outcome

Exact released SurfBoard MoveForwardOnX source differed from the target; preserved attempt 1 for the later Sol pass.
