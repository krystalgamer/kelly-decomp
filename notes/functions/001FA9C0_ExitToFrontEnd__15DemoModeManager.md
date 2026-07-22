# ExitToFrontEnd__15DemoModeManager

- Address: `0x001FA9C0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/DemoMode.cpp`
- Reference source: `KS/SRC/ks/DemoMode.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.6316 | 36.8421 | `candidate.cpp` |
| 2 | different | 78.9474 | 68.4211 | `candidate.cpp` |
| 3 | different | 78.9474 | 68.4211 | `candidate.cpp` |
| 4 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 5 | different | 92.1053 | 89.4737 | `candidate.cpp` |

## Attempt notes

The released body was tried first.  The shipped function additionally calls
`BeachFrontEnd::HideAllDots`, so later attempts reconstructed that source-level
behavior using new shared DemoMode and FrontEndManager contexts.  The shared
DemoMode declaration also consolidates all four prior selectors and records
the shipped replay-buffer padding that places `wasInDemo` at `0x88`.

Attempts two through five recovered all instructions and calls.  Normalized
barriers corrected the sibling call and most scheduling, but the remaining
candidate places the `frontendmanager` low-half address calculation one
instruction later than the target.  No source-only fifth variant matched.

## Outcome

Deferred after five source-only attempts; the behavior and layout are recovered, but EE GCC schedules the front-end base address one instruction differently.
