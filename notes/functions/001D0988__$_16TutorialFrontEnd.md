# _$_16TutorialFrontEnd

- Address: `0x001D0988`
- Size: `0xE8` (232 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TutorialFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TutorialFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate-1-exact-released.cpp` |
| 2 | different | 17.6724 | 5.1724 | `candidate-2-pragma-interface.cpp` |
| 3 | different | 16.8103 | 5.1724 | `candidate-3-local-tutorial-vtables.cpp` |
| 4 | different | 20.6897 | 6.8966 | `candidate-4-source-level-destructor-lowering.cpp` |
| 5 | different | 81.0345 | 75.8621 | `candidate-5-volatile-base-lowering.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released TutorialFrontEnd destructor and full owned/base teardown operations are recovered at exact size, but authentic isolated headers externalize FEMultiMenu destruction and source-level lowering leaves fourteen vtable/delete scheduling positions different.
