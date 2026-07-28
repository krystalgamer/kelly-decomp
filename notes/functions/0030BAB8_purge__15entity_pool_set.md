# purge__15entity_pool_set

- Address: `0x0030BAB8`
- Size: `0x184` (388 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.2059 | 3.9216 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 64 lane A3 — 0x0030BAB8 purge__15entity_pool_set

- Used the exact released `entity_pool_set::purge` body with minimum self-contained declarations for its map/list iterators, containers, pool destructor, and released helper symbols.
- Tested exactly once with `env/bin/python tools/function_test.py test 0x0030BAB8 --candidate tmp/source_first/0030BAB8/candidate.cpp`.
- Result: `different`; byte score 27.2059% (111/408), instruction score 3.9216% (4/102), candidate size 408 versus target 388.
- No variants, diff chasing, normalization, build, finalization, integration, tracked-source edits, tool edits, commit, or git mutation were performed.

Citations:
- `kelly-slaters-pro-surfer/KS/SRC/entity_maker.cpp:1094-1106` — exact released function body.
- `kelly-slaters-pro-surfer/KS/SRC/entity_maker.h:31-44` — released class, container typedefs, members, and declaration.
- `tmp/functions/0030BAB8_purge__15entity_pool_set/attempt-1/result.json` — sole non-placeholder test result.

## Outcome

The exact released entity-pool purge differed at 27.2059% byte score; no source variant was attempted.
