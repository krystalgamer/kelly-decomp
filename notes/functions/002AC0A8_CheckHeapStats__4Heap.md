# CheckHeapStats__4Heap

- Address: `0x002AC0A8`
- Size: `0x1A8` (424 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.6887 | 70.7547 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 75 lane A2 — 0x002AC0A8

- Status: **different**
- Attempts: **1**
- Byte score: **92.6887%** (393/424)
- Instruction score: **70.7547%** (75/106)
- Candidate: `tmp/functions/002AC0A8_CheckHeapStats__4Heap/attempt-1/candidate.cpp`
- SHA-1: `334c766f6560d8e6d2f21b365e8eed8023e71d11`
- Candidate/target size: 424/424 bytes

Used the exact released `Heap::CheckHeapStats` body once with minimal source-faithful declarations. It compiled but differed. No variants, retries, diff chasing, finalization, build, commit, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/heap.cpp:42-73,1488-1530`
- `kelly-slaters-pro-surfer/KS/SRC/heap.h:33-102`
- `tmp/functions/002AC0A8_CheckHeapStats__4Heap/attempt-1/result.json`

## Outcome

The exact released heap-statistics check differed at 92.6887% byte score; no source variant was attempted.
