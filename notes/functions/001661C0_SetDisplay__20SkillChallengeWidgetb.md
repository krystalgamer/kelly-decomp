# SetDisplay__20SkillChallengeWidgetb

- Address: `0x001661C0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_skillchallenge.cpp`
- Reference source: `KS/SRC/ks/igo_widget_skillchallenge.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override delegates to `IGOWidget::SetDisplay`; a barrier preserves the call wrapper.

## Outcome

The released `SkillChallengeWidget::SetDisplay` wrapper matched exactly on the first attempt.
