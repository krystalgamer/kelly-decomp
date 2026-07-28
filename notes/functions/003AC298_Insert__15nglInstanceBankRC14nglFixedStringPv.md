# Insert__15nglInstanceBankRC14nglFixedStringPv

- Address: `0x003AC298`
- Size: `0x1A8` (424 bytes)
- Object: `ngl/ngl_instbank`
- Debug source: `C:/NGL/ps2/ngl_instbank.cpp`
- Reference source: `NGL/PS2/ngl_instbank.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.812 | 0.8547 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 75 lane B5 — 0x003AC298

- Status: **source_pending** (`different`)
- Attempts: **1**
- Byte score: **15.812%** (74/468)
- Instruction score: **0.8547%** (1/117)
- Candidate: `tmp/functions/003AC298_Insert__15nglInstanceBankRC14nglFixedStringPv/attempt-1/candidate.cpp`
- SHA-1: `75261287581ceb06c92833c56be52027f234ad27`
- Candidate/target size: 468/424 bytes

Exact released `nglInstanceBank::Insert` body was tested once with minimal declarations reproducing the released bank/node layout and inline fixed-string assignment/comparisons. It compiled but differed. No variants, retries, diff chasing, finalization, integration, build, tracked-file edits, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/NGL/PS2/ngl_instbank.cpp:83-123`
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_instbank.h:6-49`
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_fixedstr.h:11-111`
- `tmp/functions/003AC298_Insert__15nglInstanceBankRC14nglFixedStringPv/attempt-1/result.json`

## Outcome

The exact released NGL instance-bank insertion differed at 15.8120% byte score; no source variant was attempted.
