# render_igo__4game

- Address: `0x00278F30`
- Size: `0xBC` (188 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.7021 | 29.7872 | `candidate.cpp` |
| 2 | different | 38.2979 | 31.9149 | `candidate.cpp` |
| 3 | different | 38.2979 | 31.9149 | `candidate.cpp` |
| 4 | different | 34.0426 | 27.6596 | `candidate.cpp` |
| 5 | different | 30.5 | 18.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body omitted two target conversion hazard nops and tail-called
scene completion.

### Attempt 2 notes

Preventing the final tail call recovered the epilogue but not conversion nops.

### Attempt 3 notes

Fixed integer and floating center registers retained the same two missing nops.

### Attempt 4 notes

Non-emitting floating constraints changed scheduling without reproducing target.

### Attempt 5 notes

Volatile center intermediates added memory traffic and remained different.

## Outcome

Five source-level variants reproduced IGO scene setup, perspective, rumble, and scene completion, but two target conversion-hazard nops could not be generated source-faithfully.
