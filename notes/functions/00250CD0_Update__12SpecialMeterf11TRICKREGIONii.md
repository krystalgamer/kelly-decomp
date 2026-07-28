# Update__12SpecialMeterf11TRICKREGIONii

- Address: `0x00250CD0`
- Size: `0x1D4` (468 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.4188 | 41.8803 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave86 A2

- Target: `0x00250CD0 Update__12SpecialMeterf11TRICKREGIONii`
- Size/object: `468 / 0x1D4`, `game/files_kellyslater`
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/ks/specialmeter.cpp:58-135`
- Faithful declarations: `specialmeter.h:10-48`, `eventmanager.h:9-67`, `trickregion.h:7-12`, `trickdata.h:309-380`, and `trick_system.h:25-40`
- Confirmed scratch absent, queue `pending` with attempt count 0, and prepared status `attempts_used: 0`.
- Candidate is LF-only, self-contained, and has no includes.
- Sole test: `env/bin/python tools/function_test.py test 0x00250CD0 --candidate tmp/source-first-wave86/A2-00250CD0/candidate.cpp`
- Result: `different`; 250/468 matching bytes (53.4188%), 49/117 matching instructions (41.8803%); candidate size 460 bytes.
- Candidate SHA-1: `0260947720adc08dd903b41ac5d8408aa5a2ae69`
- Candidate SHA-256: `a30cd173edba05447da91cf22c00569080484e050f888f2fb5b86421eefff957`
- Exactly one honest candidate and one harness invocation. No alternate, asm, annotations, variants, retry, attempts 2-5, or post-test chase.
- Tracked/reference files remained read-only. No finalize, integrate, build, commit, or git mutation.

## Outcome

The exact released special-meter update body differed at 53.4188% byte score; no source variant was attempted.
