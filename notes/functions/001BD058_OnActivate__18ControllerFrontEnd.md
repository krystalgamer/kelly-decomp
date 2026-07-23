# OnActivate__18ControllerFrontEnd

- Address: `0x001BD058`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.2381 | 4.7619 | `candidate.cpp` |
| 2 | different | 90.4762 | 90.4762 | `candidate.cpp` |
| 3 | different | 90.4762 | 90.4762 | `candidate.cpp` |
| 4 | different | 57.1429 | 28.5714 | `candidate.cpp` |
| 5 | different | 90.4762 | 90.4762 | `candidate.cpp` |

### Attempt 1 notes

No released ControllerFrontEnd declaration/body was found. Reconstructed the target field transfers, global frontendmanager update, and FEGraphicalMenu base call; without an exit barrier the base call tail-called and yielded 64 bytes.

### Attempt 2 notes

Added the matching-only exit barrier. The body reached 90.48%; only the global high-address setup instructions were scheduled in the opposite order.

### Attempt 3 notes

Materialized a frontendmanager pointer local before the field copies. The compiler retained the same 90.48% instruction order.

### Attempt 4 notes

Added a matching barrier after the manager-address local. This disrupted broader scheduling and regressed to 57.14%.

### Attempt 5 notes

Restored direct global access and expressed the selected value as a const local. The same two-instruction 90.48% address schedule remained.

## Outcome

ControllerFrontEnd::OnActivate remained blocked by a two-instruction global-address schedule after five reconstructed source forms.
