# Break__10StringList

- Address: `0x00147EE0`
- Size: `0x19C` (412 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.7547 | 3.7736 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 71 lane A5 — 0x00147EE0

- Confirmed no prior attempt existed.
- Used the exact released `StringList::Break` body with minimal self-contained declarations.
- Ran `function_test` exactly once. Result: `different`; byte score 20.7547% (88/424), instruction score 3.7736% (4/106), candidate size 424 versus target 412.
- No variants, diff chasing, retries, finalization, build, integration, commit, or tracked source-file mutation were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.cpp:84-103`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:12-45`
- `kelly-slaters-pro-surfer/KS/SRC/random.h:142-159`
- `kelly-slaters-pro-surfer/KS/SRC/ks/coords.h:47-52`
- `tmp/functions/00147EE0_Break__10StringList/attempt-1/result.json`
- `tmp/source_first/00147EE0/attempt-1.md`

## Outcome

The exact released string-list break function differed at 20.7547% byte score; no source variant was attempted.
