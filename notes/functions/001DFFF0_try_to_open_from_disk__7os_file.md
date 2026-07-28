# try_to_open_from_disk__7os_file

- Address: `0x001DFFF0`
- Size: `0x1A0` (416 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_file.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_file.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 72 lane B5 for `0x001DFFF0 try_to_open_from_disk__7os_file` (416 bytes).
- Tested one transcription of the released `os_file::try_to_open_from_disk` body with minimal declarations.
- Result: **compile_failed**, score **0.0000%**.
- Compilation stopped before code generation because the isolated toolchain include set has no `assert.h`.
- Exactly one candidate was tested. No retry, variant, diff chase, build, finalization, integration, tracked/reference edits, commit, or push.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_file.cpp:142-176`
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_file.h:13-91`
- `tmp/functions/001DFFF0_try_to_open_from_disk__7os_file/attempt-1/result.json`
- `tmp/functions/001DFFF0_try_to_open_from_disk__7os_file/attempt-1/compiler.stderr`

## Outcome

The exact released disk-file open function failed to compile in the isolated bench; no source variant was attempted.
