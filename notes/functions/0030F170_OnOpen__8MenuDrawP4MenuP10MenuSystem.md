# OnOpen__8MenuDrawP4MenuP10MenuSystem

- Address: `0x0030F170`
- Size: `0x100` (256 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 81.25 | `candidate.cpp` |

### Attempt 1 notes

Released-source first pass. The exact released `MenuDraw::OnOpen` body was tested once with a self-contained declaration prefix copied from the released menu and menudraw declarations. Result: different, score 87.5% (52/64 instructions; 224/256 bytes). No tuning or second attempt was performed. The first prepare invocation used unavailable `python`; preparation then succeeded with the repository virtualenv interpreter before the sole test.

## Outcome

The exact released MenuDraw opener differed from the target; the sole attempt scored 87.5%.
