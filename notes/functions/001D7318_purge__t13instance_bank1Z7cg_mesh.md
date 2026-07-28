# purge__t13instance_bank1Z7cg_mesh

- Address: `0x001D7318`
- Size: `0x194` (404 bytes)
- Object: `game/files_frontend`
- Debug source: `instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.7228 | 4.1237 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 69 lane A5 — 0x001D7318

- Confirmed no prior attempt existed.
- Used the exact released `instance_bank<T>::purge` body with minimal self-contained declarations for the `cg_mesh` specialization.
- Ran `function_test` exactly once. Result: `different`; byte score 27.7228% (112/404), instruction score 4.1237% (4/97), candidate size 308 versus target 404.
- No variants, diff chasing, retries, finalization, build, integration, commit, or tracked-file mutation were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/instance.h:13-89,253-288`
- `kelly-slaters-pro-surfer/KS/SRC/colmesh.h:30-51`
- `tmp/functions/001D7318_purge__t13instance_bank1Z7cg_mesh/attempt-1/result.json`
- `tmp/source_first/001D7318/attempt-1.md`

## Outcome

The exact released cg-mesh instance-bank purge differed at 27.7228% byte score; no source variant was attempted.
