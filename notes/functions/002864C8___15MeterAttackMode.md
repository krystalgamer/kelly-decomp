# __15MeterAttackMode

- Address: `0x002864C8`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/ks/mode_meterattack.cpp`
- Reference source: `KS/SRC/ks/mode_meterattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.6429 | 7.1429 | `candidate.cpp` |
| 2 | different | 19.6429 | 7.1429 | `candidate.cpp` |
| 3 | different | 31.25 | 5.0 | `candidate.cpp` |
| 4 | different | 98.6842 | 94.7368 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `mode_meterattack.cpp:13-27` initialization order
and created a shared released MeterAttackMode/Player declaration.  The exact
index loop was scalar-expanded by the available EE GCC.  An equivalent
two-element pointer loop retained the compact retail loop; expressing the
positive PS2 address comparison through signed integers reproduced the
target's `slt` rather than the compiler's otherwise identical `sltu`.

## Outcome

Matched all player and game/set counter initialization byte-for-byte.
