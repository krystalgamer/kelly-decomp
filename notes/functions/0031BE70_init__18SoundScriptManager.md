# init__18SoundScriptManager

- Address: `0x0031BE70`
- Size: `0x4C` (76 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile failed | 0.0 | 0.0 | `candidate.cpp` |
| 2 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 3 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 4 | different | 55.0 | 50.0 | `candidate.cpp` |
| 5 | different | 89.4737 | 89.4737 | `candidate.cpp` |

## Attempt notes

Used immutable `ks/SoundScript.cpp:126-136` and extended the shared released
manager context with `nlVector3d`, `init`, and `clearEvents`.  The first test
exposed and fixed a missing shared `entity` forward declaration.  Thereafter
the exact body reproduced every operation and stack-vector store, but EE GCC
exchanged the `ra` save and the move of `this` into `s0`.  Alias, barrier, and
equivalent vector-assignment forms did not correct the prologue.

## Outcome

Deferred after five source-only attempts due the remaining two-instruction
callee-save prologue schedule.
