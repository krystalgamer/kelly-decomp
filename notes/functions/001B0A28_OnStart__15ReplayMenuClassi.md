# OnStart__15ReplayMenuClassi

- Address: `0x001B0A28`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.8947 | 26.3158 | `candidate.cpp` |
| 2 | different | 32.8947 | 26.3158 | `candidate.cpp` |
| 3 | different | 93.4211 | 78.9474 | `candidate.cpp` |
| 4 | different | 97.3684 | 89.4737 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used correct object offsets, but the reconstructed FEMenu base lacked protected virtual helpers and the false branch was sibling-called.

### Attempt 2 notes

Adding the seven released protected FEMenu virtual helpers moved ReplayEnd substantially closer, but two historical vtable entries remained absent and the false branch still tail-called.

### Attempt 3 notes

A single final barrier prevented the sibling call but selected a shared epilogue unlike the target's branch-local restore paths.

### Attempt 4 notes

Restricting the normalized barrier to the base OnStart branch reproduced every instruction except the two ReplayEnd vtable offsets.

### Attempt 5 notes

As a documented last resort after the shared original-like hierarchy remained two historical entries short, a shared raw layout shim models only the existing ReplayEnd vtable slot and this adjustment. It reproduces the released virtual call behavior exactly; the normalized barrier emits no instruction and prevents only the demonstrated base-call tail merge.

## Outcome

Matched replay menu start behavior using shared front-end declarations and a documented last-resort historical vtable layout fallback.
