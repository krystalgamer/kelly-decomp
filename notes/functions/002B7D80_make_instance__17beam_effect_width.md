# make_instance__17beam_effect_width

- Address: `0x002B7D80`
- Size: `0x60` (96 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.4167 | 50.0 | `candidate.cpp` |
| 2 | different | 85.4167 | 70.8333 | `candidate.cpp` |
| 3 | different | 83.3333 | 70.8333 | `candidate.cpp` |
| 4 | different | 69.7917 | 62.5 | `candidate.cpp` |
| 5 | different | 73.9583 | 66.6667 | `candidate.cpp` |

## Outcome

Released beam width effect instancing retained allocation-result/vtable/float load-store scheduling differences after five fixed-register candidates; best score 85.42%.
