# Init__20SkillChallengeWidgetR9PanelFileP4FontT2RC7color32T4

- Address: `0x001661E0`
- Size: `0xD4` (212 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_skillchallenge.cpp`
- Reference source: `KS/SRC/ks/igo_widget_skillchallenge.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.5849 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and layouts matched every instruction; only the unresolved local string-literal relocation bytes differed.

### Attempt 2 notes

Bound the released `challengemeter` literal to its target address. The exact body then matched byte-exactly.

### Attempt 3 notes

Moved the exact released IGOWidget, SkillChallengeWidget, TextString, PanelFile, and color declarations into one narrow shared header. The shared-context candidate remained byte-exact.

## Outcome

Matched the exact released skill-challenge widget initialization using one narrow shared source-faithful class header and a target binding for the released panel-object name.
