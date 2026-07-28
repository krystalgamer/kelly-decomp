# __19slc_script_object_tRC14script_managerPCc

- Address: `0x0034FC98`
- Size: `0x1C4` (452 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.4956 | 3.5398 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Exact released constructor body preserved from `kelly-slaters-pro-surfer/KS/SRC/script_library_class.cpp:188-199`.
- Self-contained LF candidate uses only minimal local declarations; no project or unavailable includes.
- Before testing, inspected the released source, target disassembly, metadata, generated candidate stub, and confirmed `attempts.json` was `[]` / status was not prepared before preparation.
- Sole harness invocation: `env/bin/python tools/function_test.py test 0x0034FC98 --candidate tmp/source-first-wave82/A2-0034FC98/candidate.cpp`.
- Result: `different`; 61/452 matching bytes (13.4956%), 4/113 matching instructions (3.5398%); emitted candidate size 316 bytes.
- Exactly one attempt. No retry, variants, alternate logic, post-test diff chase, asm/annotations, tracked/reference edits, finalize, integrate, build, or git mutation.

## Outcome

The exact released script-object library constructor body differed at 13.4956% byte score; no source variant was attempted.
