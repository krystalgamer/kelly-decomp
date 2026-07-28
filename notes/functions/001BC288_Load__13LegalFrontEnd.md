# Load__13LegalFrontEnd

- Address: `0x001BC288`
- Size: `0x1B0` (432 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Result: **compile_failed**
- Byte score: **0.0000%**
- Candidate SHA-1: `30da720f7e810dbb9e8a26226a2db1dcba911214`
- Used the exact released `LegalFrontEnd::Load()` body with minimal declarations.
- The sole isolated candidate test failed because the released `TARGET_PS2` guard was not defined by the test compiler.
- Per the one-shot FIRST PASS constraint, no retry, variant, diff chasing, build, finalization, integration, tracked/reference edit, commit, or push was performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/GraphicalMenuSystem.cpp:123-149` — exact released body.
- `kelly-slaters-pro-surfer/KS/SRC/ks/GraphicalMenuSystem.h:71-88` — released class declaration.
- `tmp/functions/001BC288_Load__13LegalFrontEnd/attempt-1/result.json` — sole test result.
- `tmp/functions/001BC288_Load__13LegalFrontEnd/attempt-1/compiler.stderr` — compile diagnostic.

## Outcome

The exact released legal-front-end loader failed to compile in the isolated bench; no source variant was attempted.
