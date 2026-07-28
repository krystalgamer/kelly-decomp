# play__8RandomVO

- Address: `0x002562E0`
- Size: `0x1C0` (448 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/VOEngine.cpp`
- Reference source: `KS/SRC/ks/VOEngine.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.4793 | 11.0169 | `candidate.cpp` |

### Attempt 1 notes

# Released-source FIRST PASS wave 80 lane B5

- Target: `0x002562E0 play__8RandomVO`, 448 bytes (`0x1C0`)
- Object: `game/files_kellyslater`
- Zero attempts confirmed before preparation: queue status `pending`, attempts `0`, and no scratch/lane directory existed.
- Candidate uses the exact released function body unchanged, with minimal faithful self-contained declarations and no unavailable project headers.
- Released source citation: `kelly-slaters-pro-surfer/KS/SRC/ks/VOEngine.cpp:41-97`; layout citation: `kelly-slaters-pro-surfer/KS/SRC/ks/VOEngine.h:27,37-64`; random semantics citation: `kelly-slaters-pro-surfer/KS/SRC/random.h:13,17,64-96,113-146`.
- Target assembly inspected before testing: `tmp/functions/002562E0_play__8RandomVO/target.s`.
- Exactly one candidate test was run. Result: `different`, score `27.4793`, instruction score `11.0169`, matching bytes `133/484`, matching instructions `13/118`, emitted size `484`, target size `448`.
- Candidate SHA-1: `7ce09687a11a46158faa581424b49cca885118b5`.
- Result: `tmp/functions/002562E0_play__8RandomVO/attempt-1/result.json`.
- No retry, alternative body, variant, asm/matching annotation, or post-test diff chasing was performed. Attempts 2-5 were not run.
- `tracked_files_changed=false`; `finalized=false`; `integrated=false`.

## Outcome

The exact released random-voice playback body differed at 27.4793% byte score; no source variant was attempted.
