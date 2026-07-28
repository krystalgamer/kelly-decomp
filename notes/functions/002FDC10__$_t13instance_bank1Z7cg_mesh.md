# _$_t13instance_bank1Z7cg_mesh

- Address: `0x002FDC10`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.1818 | 6.3636 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 notes

- Target: `0x002FDC10 _$_t13instance_bank1Z7cg_mesh`, object `game/files_misc2`, expected size 436 bytes (`metadata.json`; `config/SLUS_203.34.symbol_addrs.txt:2753`).
- Released source citation: `kelly-slaters-pro-surfer/KS/SRC/instance.h:94-104` defines the exact destructor body: iterate `refs_by_label`, assert the count, print the unreleased warning, and delete each `ref_t`.
- Assembly citation: `tmp/functions/002FDC10__$_t13instance_bank1Z7cg_mesh/target.s` shows iterator traversal, `debug_print`, `stringx`/allocation deletion, both tree destructors, and deleting-destructor flag handling.
- Candidate: one self-contained C++ translation unit preserving that released loop body and supplying faithful 32-bit tree/node/iterator layouts plus explicit equivalent member-tree destruction needed by the standalone harness.
- Sole harness result: `different`; byte score 33.1818% (146 matching / 440 compared), instruction score 6.3636% (7 / 110), candidate size 440, target size 436, SHA-1 `6395b1e1c705c8253c3d4fe36a3343fdcc290f12`.
- Timing: see `start-utc.txt` and `end-utc.txt` (UTC).
- Exactly one test invocation and one attempt record. No retry, finalize, integration, configure, ninja/build, tracked edit, or git mutation was performed.

## Outcome

The exact released collision-mesh instance-bank destructor body differed at 33.1818% byte score; no source variant was attempted.
