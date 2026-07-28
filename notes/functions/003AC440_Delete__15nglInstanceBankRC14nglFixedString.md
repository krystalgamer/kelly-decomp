# Delete__15nglInstanceBankRC14nglFixedString

- Address: `0x003AC440`
- Size: `0x1C4` (452 bytes)
- Object: `ngl/ngl_instbank`
- Debug source: `C:/NGL/ps2/ngl_instbank.cpp`
- Reference source: `NGL/PS2/ngl_instbank.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.1311 | 2.459 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 82 lane A4 — 0x003AC440 `Delete__15nglInstanceBankRC14nglFixedString`

- Candidate: exact released nglInstanceBank::Delete body with faithful fixed-string and skip-list declarations.
- Citation: `kelly-slaters-pro-surfer/NGL/PS2/ngl_instbank.cpp:125-169; ngl_instbank.h:6-48; ngl_fixedstr.h:14-129`.
- Result: `different`; byte score 22.1311%; instruction score 2.4590%.
- Candidate/target size: 488/452 bytes.
- Candidate SHA-1: `b8674acd435f9f6187649d1ea23767a5375a3ee5`.
- Duration: 5.542s.

Exactly one candidate and harness invocation were used. No retry, variant, diff chase, build, finalize, integration, git mutation, or tracked-file edit occurred.

## Outcome

The exact released NGL instance-bank deletion body differed at 22.1311% byte score; no source variant was attempted.
