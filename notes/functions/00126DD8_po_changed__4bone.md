# po_changed__4bone

- Address: `0x00126DD8`
- Size: `0xFC` (252 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/bone.cpp`
- Reference source: `KS/SRC/bone.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.2222 | 33.3333 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue row was `pending` with zero attempts; no address scratch existed before preparation.
- Used the released retail body from `bone.cpp:107-136`, with authentic `TEST_WARP_BUGS=0`, `BUILD_FINAL`, PS2 vector/PO layout, interface accessors, and virtual hierarchy declarations.
- Result: **different** — byte score 47.2222%, instruction score 33.3333%; candidate size 228 versus target 252 bytes.
- Exactly one candidate was tested; no second attempt or diff chasing was performed.

## Outcome

Exact released bone po_changed source differed from the target; preserved attempt 1 for the later Sol pass.
