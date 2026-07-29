# Load__11PanelObjectPUcRi

- Address: `0x001514B0`
- Size: `0x1F8` (504 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave94 A2

Target: `0x001514B0 Load__11PanelObjectPUcRi` (504/0x1F8), `game/files_frontend`.
Reference: `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.cpp:2748-2767` (read-only).
Attempts before preparation: 0 (`pending`, queue attempt count 0).
Prepared: `tmp/functions/001514B0_Load__11PanelObjectPUcRi`.
Exactly one LF candidate and one harness invocation were used.
Candidate: exact released `PanelObject::Load` body with minimal self-contained declarations.
Result: `compile_failed`, score 0.0; candidate SHA-1 `661772a1d51c1ac73cff680626ee7a0a6c45eab4`.
No retry, variant, chase, build, finalize, integration, git mutation, or tracked edit.

packet=false; tracked_files_changed=false; finalized=false; integrated=false.

## Outcome

The exact released panel-object loading candidate failed to compile with its minimal released declarations; no alternate source was attempted.
