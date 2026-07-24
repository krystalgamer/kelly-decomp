# _$_13MenuSoundDraw

- Address: `0x003029B8`
- Size: `0x60` (96 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/menusound.cpp`
- Reference source: `KS/SRC/menuSound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released empty derived destructor and generated Menu vtable/Close/Resize/delete behavior. The corrected source matched on attempt 2.

## Outcome

Matched sound draw menu destructor
