# StartWarning__10CareerMenu

- Address: `0x00180FF0`
- Size: `0xF8` (248 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.7097 | 87.0968 | `candidate.cpp` |

### Attempt 1 notes

Exact released `CareerMenu::StartWarning` body with the authentic menu and entry vtable layouts. All highlight/disable calls and field offsets reproduce; EE GCC tail-called `MainFrontEnd::ResizeCareerBox`, yielding 244 bytes instead of the target's normal call and 248-byte epilogue.

## Outcome

Exact released career warning setup differed only by final resize tail-call formation.
