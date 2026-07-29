# find_instance__C12slc_entity_tRC7stringx

- Address: `0x00316100`
- Size: `0x1E4` (484 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_entity.cpp`
- Reference source: `KS/SRC/script_lib_entity.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.5738 | 28.6885 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave90 B1

- Target: `0x00316100 find_instance__C12slc_entity_tRC7stringx`
- Size/object: 484 (`0x1E4`), `game/files_script`
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/script_lib_entity.cpp:49-58`
- Confirmed zero attempts before preparation and testing.
- Candidate is LF-only, self-contained, and uses minimal faithful declarations with no headers.
- Sole test: `python3 tools/function_test.py test 0x00316100 --candidate tmp/source-first-wave90/B1-00316100/candidate.cpp`
- Result: `different`; 198/488 compared bytes matched (40.5738%), 35/122 instructions matched (28.6885%); candidate size 488 bytes, target size 484 bytes.
- Candidate SHA-1: `52149109e74774d79756ee41527a58fe12847f5e`
- Exactly one honest candidate and one harness invocation. No alternate, asm, annotations, variants, retry, attempts 2-5, or post-test chase.
- Tracked/reference files remained read-only. No finalize, integrate, build, or git mutation.

## Outcome

The exact released script-entity instance lookup body differed at 40.5738% byte score; no source variant was attempted.
