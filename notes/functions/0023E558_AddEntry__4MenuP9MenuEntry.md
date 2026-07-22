# AddEntry__4MenuP9MenuEntry

- Address: `0x0023E558`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.2105 | 78.9474 | `candidate.cpp` |
| 2 | different | 84.2105 | 78.9474 | `candidate.cpp` |
| 3 | different | 81.5789 | 73.6842 | `candidate.cpp` |
| 4 | different | 84.2105 | 78.9474 | `candidate.cpp` |
| 5 | different | 80.2632 | 68.4211 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `menu.cpp:142-146` body first and reconstructed
the released `Menu` declaration order and layout in the shared menu header.
The exact body and local-variable variants reproduce every instruction after
the prologue, but the available EE GCC schedules the three callee-save stores
differently.  A narrowly tested normalized barrier delayed the return-address
store further and was not retained.

## Outcome

Deferred after five source-only attempts because the released behavior cannot
reproduce the shipped callee-save prologue schedule.
