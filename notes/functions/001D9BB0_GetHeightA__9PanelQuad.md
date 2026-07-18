# GetHeightA__9PanelQuad

- Address: `0x001D9BB0`
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

The released inline getter returns `height_a` from offset `0xC4`.

## Outcome

The released `PanelQuad::GetHeightA` getter matched exactly on the first attempt.
