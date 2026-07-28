# purge__t13instance_bank1Z8material

- Address: `0x001D77C8`
- Size: `0x188` (392 bytes)
- Object: `game/files_frontend`
- Debug source: `instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.551 | 4.2553 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Tested the exact released `instance_bank<T>::purge` template body from `instance.h:253-288` once as the canonical scored attempt.
- Added minimal self-contained declarations reproducing the material/ref record, red-black-tree node and iterator layouts, inline iterator increment, set storage, destructors, allocator delete, and the two released `_M_erase` callees.
- Result: **different**, byte score **27.5510%** (108/392) and instruction score **4.2553%** (4/94); candidate/target size **296/392 bytes**.
- Two earlier invocations failed only because isolated declaration infrastructure first referenced an unavailable `<set>` header and then used dependent nested type syntax rejected by the released compiler. Their scratch attempt records were replaced during identical-body infrastructure repair; no source-body variant or second scored attempt was made.

## Outcome

The exact released material instance-bank purge differed at 27.5510% byte score; no source variant was attempted.
