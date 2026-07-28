# new_instance__t13instance_bank1Z7cg_meshRC7stringxUi

- Address: `0x00140F80`
- Size: `0x1B0` (432 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.0556 | 0.9259 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Result: **different**
- Byte score: **18.0556%**
- Instruction score: **0.9259%**
- Candidate SHA-1: `f7d9c887037c0f1a8fb4db79f3fe323205449001`
- Used the exact released `instance_bank<T>::new_instance(const stringx&, unsigned)` body with minimal declarations for `stringx`, `filespec`, `cg_mesh`, allocation, and template/set support types.
- The sole isolated candidate test emitted the exact target symbol at 396 bytes versus 432 target bytes.
- Per the one-shot FIRST PASS constraint, no retry, variant, diff chasing, build, finalization, integration, tracked/reference edit, commit, push, or tooling change was performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/instance.h:14-82,160-179` — released bank declarations and exact function body.
- `kelly-slaters-pro-surfer/KS/SRC/filespec.h:9-20` — released `filespec` declaration and layout.
- `kelly-slaters-pro-surfer/KS/SRC/colmesh.h:30-51` — released `cg_mesh` filename constructor declaration.
- `notes/function_queue.csv:6446` — clean target row and metadata.
- `tmp/functions/00140F80_new_instance__t13instance_bank1Z7cg_meshRC7stringxUi/attempt-1/result.json` — sole test result.

## Outcome

The exact released cg-mesh instance creation differed at 18.0556% byte score; no source variant was attempted.
