# frame_advance__12conglomeratef

- Address: `0x00307388`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/conglom.cpp`
- Reference source: `KS/SRC/conglom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.8947 | 52.6316 | `candidate.cpp` |
| 2 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 3 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 4 | different | 30.0 | 20.0 | `candidate.cpp` |
| 5 | different | 89.4737 | 89.4737 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `conglom.cpp:1014-1024` behavior and created a
shared conglomerate/entity declaration.  A trailing normalized barrier was
required to prevent the compiler from replacing the released base call with
a sibling jump.  With that documented barrier, every instruction matches
except that EE GCC exchanges the saved `f20` store and the move of `this`
into `s0`.  Exact-local, entry-barrier, and alias variants did not correct it.

## Outcome

Deferred after five source-only attempts due the remaining two-instruction
callee-save prologue schedule.
