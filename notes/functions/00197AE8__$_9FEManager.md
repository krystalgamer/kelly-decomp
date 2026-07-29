# _$_9FEManager

- Address: `0x00197AE8`
- Size: `0x24C` (588 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.0833 | 74.359 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 112 lane A5

Exact released `FEManager::~FEManager()` body tested once for `0x00197AE8 _$_9FEManager` with minimal self-contained layout declarations. Result `different`: byte score 77.0833%, instruction score 74.359% (481/624 bytes; 116/156 instructions), emitted size 624 versus target 588. No retry, variant, diff chase, build, finalize, integration, git mutation, or tracked edit.

## Outcome

The exact released frontend-manager destructor body differed at 77.0833% byte score; no source variant was attempted.
