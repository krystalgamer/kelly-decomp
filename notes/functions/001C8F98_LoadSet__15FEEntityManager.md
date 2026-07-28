# LoadSet__15FEEntityManager

- Address: `0x001C8F98`
- Size: `0x1A8` (424 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEEntityManager.cpp`
- Reference source: `KS/SRC/ks/FEEntityManager.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# 0x001C8F98 LoadSet__15FEEntityManager

The exact released `FEEntityManager::LoadSet()` body was tested once with
minimal standalone declarations. Compilation failed because the iterator shim
did not declare postfix increment. No source variant or follow-up attempt was
made.

## Outcome

The exact released front-end entity-set loader failed to compile in the isolated bench; no source variant was attempted.
