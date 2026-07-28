# set_entity_id__9entity_idPCc

- Address: `0x00128A08`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Wave 78 lane A2 — FIRST PASS released-source attempt 1

Target: 0x00128A08 `set_entity_id__9entity_idPCc`, object `game/files_entity`, expected size 436 (0x1B4).
Released source citation: `kelly-slaters-pro-surfer/KS/SRC/entity.cpp:276-307`; declarations: `KS/SRC/entity.h:171-263`, `KS/SRC/entityid.h:5-28`.
Candidate SHA-1: 80633e3cd9cb8782ad4cb85385227b7efdcb8200
Result: compile_failed; score: 0.0; expected size: 436; candidate size: unavailable (compile failed).
UTC start: 2026-07-28T18:21:02Z; UTC end: 2026-07-28T18:27:14Z; duration: 372 seconds.
Harness invocations: 1. Attempts records: 1.
No retry, no finalize, no build/configure/ninja, and no tracked-file edit was performed.
Compiler diagnostics: `tmp/functions/00128A08_set_entity_id__9entity_idPCc/attempt-1/compiler.stderr`.

## Outcome

The exact released entity-id assignment candidate failed to compile in the isolated harness with its released header dependency; no alternate source was attempted.
