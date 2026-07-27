# Draw__12MainFrontEnd

- Address: `0x0017F7E0`
- Size: `0x120` (288 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.3194 | 27.7778 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- FIRST PASS A1 for `0x0017F7E0 Draw__12MainFrontEnd` in `KS/SRC/ks/MainFrontEnd.cpp`.
- Used the exact released `MainFrontEnd::Draw()` body from `kelly-slaters-pro-surfer/KS/SRC/ks/MainFrontEnd.cpp:211-233` with minimal self-contained declarations based on `MainFrontEnd.h:26-78`, `FEMenu.h:55-143,161-272,405-431`, `FEEntityManager.h:175-183`, and `FrontEndManager.h:13-20`.
- Result: **different** — 119/288 compared bytes matched (41.3194%); 20/72 instructions matched (27.7778%); candidate size 276 versus target size 288.
- Exactly one non-placeholder candidate was tested. Per first-pass policy, no variants, diff chasing, build, integration, finalization, queue edits, or source/prefix/shared proposal were made.

## Outcome

The exact released MainFrontEnd draw definition differed from the target; the sole attempt scored 41.3194%.
