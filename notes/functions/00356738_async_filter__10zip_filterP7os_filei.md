# async_filter__10zip_filterP7os_filei

- Address: `0x00356738`
- Size: `0x1C4` (452 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/zip_filter.cpp`
- Reference source: `KS/SRC/zip_filter.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.5929 | 7.0796 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 82 lane A3 — 0x00356738 `async_filter__10zip_filterP7os_filei`

- Candidate: exact released zip_filter::async_filter body with faithful z_stream, os_file, read-window, and PS2 sync declarations.
- Citation: `kelly-slaters-pro-surfer/KS/SRC/zip_filter.cpp:35,64-126; zip_filter.h:17-32`.
- Result: `different`; byte score 16.5929%; instruction score 7.0796%.
- Candidate/target size: 440/452 bytes.
- Candidate SHA-1: `44008eda635f8278ca134023a6062a091a2d6fa8`.
- Duration: 2.232s.

Exactly one candidate and harness invocation were used. No retry, variant, diff chase, build, finalize, integration, git mutation, or tracked-file edit occurred.

## Outcome

The exact released asynchronous ZIP filtering body differed at 16.5929% byte score; no source variant was attempted.
