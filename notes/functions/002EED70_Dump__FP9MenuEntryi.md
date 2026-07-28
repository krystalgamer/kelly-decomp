# Dump__FP9MenuEntryi

- Address: `0x002EED70`
- Size: `0x1C8` (456 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/menusound.cpp`
- Reference source: `KS/SRC/menuSound.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.9386 | 5.2632 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Confirmed queue status `pending` with zero attempts and `attempts.json` empty before testing.
- Prepared and inspected metadata, generated stub, target disassembly, and exact released body at `kelly-slaters-pro-surfer/KS/SRC/menuSound.cpp:131-151` before the sole test.
- Candidate preserves the exact released function body and uses minimal self-contained declarations with LF line endings and no headers.
- Sole harness invocation tested `tmp/source-first-wave83/A2-002EED70/candidate.cpp`.
- Result: `different`; 59/456 matching bytes (12.9386%), 6/114 matching instructions (5.2632%); emitted size 412 bytes.
- Exactly one attempt; no retry, alternate source, variants, asm/annotations, post-test diff chase, tracked/reference edits, build, finalize, integrate, or git mutation.

## Outcome

The exact released menu-sound dump body differed at 12.9386% byte score; no source variant was attempted.
