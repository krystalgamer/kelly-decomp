# IsOn__C9PanelQuad

- Address: `0x001D9B90`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released const getter returns the word-sized `drawOn` bool from offset `0x80`.

## Outcome

The released `PanelQuad::IsOn` bool getter matched exactly on the first attempt.
