# __tf11FEMultiMenu

- Address: `0x001D8138`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.587 | 2.1739 | `candidate.cpp` |
| 2 | different | 27.7174 | 8.6957 | `candidate.cpp` |
| 3 | different | 17.1875 | 6.25 | `candidate.cpp` |
| 4 | different | 13.587 | 2.1739 | `candidate.cpp` |
| 5 | different | 13.587 | 2.1739 | `candidate.cpp` |

### Attempt 5 notes

Reconstructed the generated RTTI graph from the exact released inheritance: `FEMultiMenu : FEGraphicalMenu`, with `FEGraphicalMenu : FEMenu, FrontEnd`, and reused the established RTTI helper pattern. All calls, addresses, names, and base counts matched semantically, but five candidates could not reproduce the target callee-saved register assignment and one extra materialization instruction; shared experiments were reverted.

## Outcome

Deferred FEMultiMenu generated RTTI after five source-level attempts could not reproduce its register allocation.
