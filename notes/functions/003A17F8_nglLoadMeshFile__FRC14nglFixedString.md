# nglLoadMeshFile__FRC14nglFixedString

- Address: `0x003A17F8`
- Size: `0x16C` (364 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.1758 | 6.5934 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 54 lane B5 for `0x003A17F8 nglLoadMeshFile__FRC14nglFixedString`.
- Tested the exact released `nglLoadMeshFile` body once with minimal self-contained declarations preserving `nglFixedString`, `nglInstanceBank::Instance`, `nglFileBuf`, and `nglMeshFile` layouts and the released external calls/globals.
- Result: **different**, byte score **24.1758%** (88/364) and instruction score **6.5934%** (6/91); candidate size 360 bytes versus target size 364 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:6383-6418`
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_fixedstr.h:14-64,98-102`
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_instbank.h:6-39`
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.h:161-166`
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2_internal.h:603-614`
- `tmp/functions/003A17F8_nglLoadMeshFile__FRC14nglFixedString/attempt-1/result.json`

## Outcome

The exact released NGL mesh-file loader differed from the target; the sole attempt scored 24.1758%.
