# _$_11PanelObject

- Address: `0x001513B0`
- Size: `0xFC` (252 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.381 | 17.4603 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue row was pending with zero attempts; no address scratch existed (0 files), and the tracked tree was clean.
- Used the released `PanelObject::~PanelObject` body verbatim from `FEPanel.cpp:2742-2746` with the authentic class/layout/destructor declarations in `FEPanel.h:606-684`; reused the narrow shared prior art in `src/KS/SRC/ks/FEPanel_shared.h:193-256`.
- Result: **different** — byte score 27.381%, instruction score 17.4603%. Exactly one candidate was tested; no second attempt or diff chasing was performed.

## Outcome

Exact released PanelObject destructor source differed from the target; preserved attempt 1 for the later Sol pass.
