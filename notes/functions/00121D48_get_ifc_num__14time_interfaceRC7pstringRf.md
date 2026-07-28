# get_ifc_num__14time_interfaceRC7pstringRf

- Address: `0x00121D48`
- Size: `0x16C` (364 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/time_interface.cpp`
- Reference source: `KS/SRC/time_interface.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.5824 | 32.6087 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 52 lane B4 for `0x00121D48 get_ifc_num__14time_interfaceRC7pstringRf`.
- Tested the exact released `time_interface::get_ifc_num` body once with minimal self-contained declarations preserving the released `pstring` storage and inline equality loop, generic/entity interface inheritance, and time-interface member layout.
- Result: **different**, byte score **42.5824%** (155/364) and instruction score **32.6087%** (30/92); candidate and target sizes were both 364 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/time_interface.cpp:8-14`
- `kelly-slaters-pro-surfer/KS/SRC/time_interface.h:17-64`
- `kelly-slaters-pro-surfer/KS/SRC/entity_interface.h:39-59,76-88`
- `kelly-slaters-pro-surfer/KS/SRC/pstring.h:21-35,45-63,137-149`
- `tmp/functions/00121D48_get_ifc_num__14time_interfaceRC7pstringRf/attempt-1/result.json`

## Outcome

The exact released time-interface numeric getter differed from the target; the sole attempt scored 42.5824%.
