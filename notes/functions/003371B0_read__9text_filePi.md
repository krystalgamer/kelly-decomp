# read__9text_filePi

- Address: `0x003371B0`
- Size: `0x144` (324 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/textfile.cpp`
- Reference source: `KS/SRC/textfile.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/textfile.cpp:117-139; kelly-slaters-pro-surfer/KS/SRC/textfile.h:12-33,72-75; tmp/source_first/003371B0/attempt-1.md. Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released text-file reader failed the isolated compile because the ctype header was unavailable; the sole attempt scored 0%.
