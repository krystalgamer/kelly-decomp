# unlockSurferPers__15GlobalDataClassi

- Address: `0x002EFDE0`
- Size: `0x18` (24 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target indexes 120-byte surfer records and sets the personality flag at absolute record offset `0xF0`.

## Outcome

The target `GlobalDataClass::unlockSurferPers` indexed store matched exactly on the first attempt.
