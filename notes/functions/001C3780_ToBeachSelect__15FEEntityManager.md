# ToBeachSelect__15FEEntityManager

- Address: `0x001C3780`
- Size: `0xFC` (252 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEEntityManager.cpp`
- Reference source: `KS/SRC/ks/FEEntityManager.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.0476 | 87.3016 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue was clean `pending` with zero attempts; no pre-existing address or function scratch existed.
- Used the released `FEEntityManager::ToBeachSelect` body verbatim with authentic FE manager, graphical menu, beach menu, and game surfer-index declarations/layouts.
- Result: **different** — byte score 94.0476%, instruction score 87.3016%; candidate and target were both 252 bytes. Exactly one candidate was tested; no second attempt or diff chasing was performed.

## Outcome

Exact released FEEntityManager ToBeachSelect source differed from the target; preserved attempt 1 for the later Sol pass.
