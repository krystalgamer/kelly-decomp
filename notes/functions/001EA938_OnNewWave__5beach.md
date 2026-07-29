# OnNewWave__5beach

- Address: `0x001EA938`
- Size: `0x200` (512 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/beach.cpp`
- Reference source: `KS/SRC/ks/beach.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.2109 | 4.6875 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave95 A5 — 0x001EA938 OnNewWave__5beach

- Scope: exact `KS/SRC/ks/beach.cpp`; no tracked edits, integration, finalize, build, retry, or chase.
- Queue state before preparation: `pending`, attempts `0`; harness scratch was absent (`not prepared`).
- Candidate: one LF-only, self-contained exact-body reconstruction from the 0x200-byte target assembly.
- Body modeled: clear sound events; select wave duration; enqueue nine countdown events and the competition-specific final event; update the wave schedule index; despawn eligible beach objects; update object activity.
- Harness invocations: 1.
- Result: `different`, 83/512 matching bytes (16.2109%), 6/128 matching instructions (4.6875%); candidate size 468 vs target 512.
- No retry performed per first-pass instructions.

## Outcome

The exact released beach new-wave body differed at 16.2109% byte score; no source variant was attempted.
