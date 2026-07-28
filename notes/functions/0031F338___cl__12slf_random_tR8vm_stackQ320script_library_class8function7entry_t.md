# __cl__12slf_random_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031F338`
- Size: `0x188` (392 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.1327 | 4.0816 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 66 lane A2 for `0x0031F338`.
- Tested the exact released `slf_random_t::operator()` body once with minimal faithful declarations for the VM stack, random call, error expression, and script function interface.
- Result: **different**, byte score **19.1327%** (75/392) and instruction score **4.0816%** (4/98); candidate size 376 bytes versus target size 392 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:1104-1124`
- `tmp/wave66-a2-0031F338/candidate.cpp`
- `tmp/functions/0031F338___cl__12slf_random_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released random script function differed at 19.1327% byte score; no source variant was attempted.
