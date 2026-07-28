# DoFaceTrick__22kellyslater_controller

- Address: `0x00215D18`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.4128 | 21.1009 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

Released citation: `kelly-slaters-pro-surfer/KS/SRC/ks/kellyslater_controller.cpp:3182-3270` (`kellyslater_controller::DoFaceTrick`). Faithful self-contained declarations reproduce released enum values and member layout needed by the unchanged released function body; target assembly was consulted only for declaration/layout selection.

Result: **different**. Byte score 45.4128% (198/436 bytes); instruction score 21.1009% (23/109 instructions). Candidate emitted size 428 bytes; target size 436 bytes. Harness SHA-1: `c5f88a1b41f51fa4d91b6d8f6c88fe36361b8586`; source SHA-256: `ce92477699cdf33dbf0f86e8a9d8592cdd1329c1b4e63006b896df816d67bdac`.

UTC timing: 2026-07-28T18:21:49Z to 2026-07-28T18:27:17Z (epoch 1785262909 to 1785263237). Exactly one source-first attempt and one harness test invocation were made. No finalize, integration, configure/ninja/build, tracked edit, retry, alternate body, or post-test diff chasing was performed.

## Outcome

The exact released face-trick execution body differed at 45.4128% byte score; no source variant was attempted.
