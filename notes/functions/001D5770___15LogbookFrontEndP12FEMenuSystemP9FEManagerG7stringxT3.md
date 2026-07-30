# __15LogbookFrontEndP12FEMenuSystemP9FEManagerG7stringxT3

- Address: `0x001D5770`
- Size: `0x440` (1088 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/LogbookFrontEnd.cpp`
- Reference source: `KS/SRC/ks/LogbookFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 12.4081 | 2.2222 | `candidate.cpp` |
| 3 | different | 11.6728 | 1.4815 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 171 lane B1

Exact released source tested once for `0x001D5770 __15LogbookFrontEndP12FEMenuSystemP9FEManagerG7stringxT3`. Attempts before: 0. Result `compile_failed`, score 0.0000%. The shared frontend declarations conflict on `PanelFile` and omit released constructor/enum declarations required by the exact body. No retry, follow-up, diff chase, tool change, build, finalize, integration, git operation, or tracked edit.

### Attempt 2 notes

Attempt 2 retained the exact released constructor body from
`kelly-slaters-pro-surfer/KS/SRC/ks/LogbookFrontEnd.cpp:12-27` and replaced the
conflicting include closure with one shared Logbook context. It supplied the
released `FEMenuEntry`, `TextString`, `BoxText`, Font enums, color constructor,
FEManager font offsets, allocation overload, and full Logbook member layout.

The candidate compiled to 932 bytes and matched 135/1088 bytes and 6/270
instructions (12.4081% bytes, 2.2222% instructions). The shared hierarchy still
treated `FEMultiMenu::cons` and `FEGraphicalMenu::Add` as out-of-line methods,
unlike the released inline wrappers.

### Attempt 3 notes

Attempt 3 restored the released inline `FEMultiMenu::cons` wrapper, including
its by-value string copies, `FEGraphicalMenu::cons` call, secondary-cursor
clear, and the inline `FEGraphicalMenu::Add` forwarding to `FEMenu::Add`.

The candidate grew to 972 bytes versus the 1088-byte target and matched
127/1088 bytes and 4/270 instructions (11.6728% bytes, 1.4815%
instructions). The remaining 116 bytes are generated default-construction
state for the full released `PanelAnimManager`, panel, and FrontEnd hierarchy,
which the existing shared layout intentionally models as opaque storage. No
inline assembly or matching annotation was added.

## Outcome

The exact released LogbookFrontEnd constructor and inline FEMultiMenu wrappers were reconstructed through shared frontend declarations; the final 972-byte candidate remained 116 bytes short because the full released PanelAnimManager/FrontEnd default-construction state is still opaque after three attempts.
