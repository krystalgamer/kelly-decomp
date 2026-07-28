# get_size__7os_file

- Address: `0x001E0A48`
- Size: `0x15C` (348 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_file.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_file.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.7586 | 19.5402 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 44 lane A1 for `0x001E0A48`.
- Tested the exact released `os_file::get_size()` body once, with minimal declarations preserving the released `os_file` member offsets, `sceCdlFILE` shape, retry globals/macros, seek constants, and `sceLseek` declaration.
- Result: **different**, byte score **32.7586%** (114/348 bytes) and instruction score **19.5402%** (17/87 instructions); candidate emitted 340 bytes versus the 348-byte target.
- No variants, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, commit, or push were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_file.cpp:18-38,535-568`
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_file.h:10-104`
- `config/SLUS_203.34.symbol_addrs.txt: get_size__7os_file`
- `notes/function_queue.csv: target row for 0x001E0A48`
- `tmp/functions/001E0A48_get_size__7os_file/attempt-1/result.json`

## Outcome

The exact released OS-file size getter differed from the target; the sole attempt scored 32.7586%.
