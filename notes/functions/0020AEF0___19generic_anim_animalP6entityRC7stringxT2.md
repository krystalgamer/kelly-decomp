# __19generic_anim_animalP6entityRC7stringxT2

- Address: `0x0020AEF0`
- Size: `0x220` (544 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Sole source-first attempt preserved in this packet. Candidate is the exact constructor source from `KS/SRC/ks/floatobj.cpp`; the standalone LF test failed compilation because surrounding declarations are absent.

## Outcome

The exact released generic animal-animation construction candidate failed to compile with its minimal declarations; no alternate source was attempted.
