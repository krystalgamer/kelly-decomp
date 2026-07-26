# Init__11PhotoWidgetP9PanelQuadP4Font

- Address: `0x0016AA98`
- Size: `0xD8` (216 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_photo.cpp`
- Reference source: `KS/SRC/ks/igo_widget_photo.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 81.4815 | `candidate.cpp` |
| 2 | different | 92.5926 | 85.1852 | `candidate.cpp` |
| 3 | different | 93.5185 | 88.8889 | `candidate.cpp` |
| 4 | different | 82.4074 | 75.9259 | `candidate.cpp` |
| 5 | different | 82.4074 | 75.9259 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Exact released `PhotoWidget::Init` body. The scratch-only declarations preserve the released inheritance, member order, `nglQuad` size, relevant virtual method order, and observed offsets (`PanelQuad::z` 0x17c, PanelQuad vptr 0x194, TextString vptr 0x4c). `assert` is compiled out as in the retail build; only the known `SetPosition` address is equated.

Outcome: **different**, 198/216 bytes (91.6667%), 44/54 instructions (81.4815%). The scratch `PanelQuad` prefix was four bytes short, producing `z`/vptr loads at 0x178/0x190; early independent stores and `s1`/`ra` saves were also scheduled differently.

### Attempt 2 notes

# Attempt 2

Keeps the exact released body and adds the released headers' `#pragma interface`. Corrects the scratch `PanelQuad` prefix by four bytes so `z` is at 0x17c and the vptr is at 0x194, matching target loads. This isolates layout/context effects from the remaining instruction-scheduling differences.

Outcome: **different**, 200/216 bytes (92.5926%), 46/54 instructions (85.1852%). All offsets, calls, conversions, virtual dispatches, and epilogue match. Differences are confined to the two save instructions and six independent pre-`GetPos` member stores.

### Attempt 3 notes

# Attempt 3

Semantically preserves the released initialization but reorders only independent member assignments. Based on attempt 2's scheduler order (`last, first, penultimate, ...`), the source order is chosen to target the retail pre-`GetPos` store sequence: `fadeOutAlpha`, `darkFade`, `borderPQ`, `photoTexture`, `shownTimer`, `timed`.

Outcome: **different**, 202/216 bytes (93.5185%), 48/54 instructions (88.8889%); **best candidate**. `shownTimer` and `timed` moved into their exact target slots. Remaining differences are swapped `s1`/`ra` saves and the four-store rotation `borderPQ, photoTexture, fadeOutAlpha, darkFade` versus target `fadeOutAlpha, darkFade, borderPQ, photoTexture`.

### Attempt 4 notes

# Attempt 4

Uses one permitted zero-instruction compiler memory barrier to separate the two `1.0f` stores from the zero/pointer stores. Within each group the source order follows the released assignments; the intent is to force the target's `fadeOutAlpha`, `darkFade` pair ahead of `borderPQ`, `photoTexture`, `shownTimer`, and `timed` without emitting assembly.

Outcome: **different**, 178/216 bytes (82.4074%), 41/54 instructions (75.9259%). The float/pointer store grouping improved locally, but the global memory clobber delayed all four stack-reference argument calculations and shifted most of the prologue schedule.

### Attempt 5 notes

# Attempt 5

Uses a zero-instruction, field-specific compiler constraint rather than a global memory clobber. The constraint makes the two float stores inputs/outputs and the pointer fields outputs, creating only the scheduling dependencies needed to place `fadeOutAlpha` and `darkFade` before `borderPQ` and `photoTexture` while leaving stack argument setup free to interleave as in the target.

Outcome: **different**, 178/216 bytes (82.4074%), 41/54 instructions (75.9259%). GCC treated the empty constrained asm as the same scheduling boundary as the memory barrier, yielding the same unfavorable prologue schedule as attempt 4.

## Outcome

Deferred after five source-level attempts. The best source-faithful candidate matched 202/216 bytes; the remaining six instructions differ only in independent save and initializer scheduling.
