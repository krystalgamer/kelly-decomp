# nslSetSourceParam__FUi18_nslSoundParamEnumf

- Address: `0x0038C468`
- Size: `0x1C0` (448 bytes)
- Object: `nsl/nsl_ps2_source`
- Debug source: `C:/NSL/PS2/nsl_ps2_source.cpp`
- Reference source: `NSL/PS2/nsl_ps2_source.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave81 A3 — 0x0038C468

- Attempts confirmed before prepare/test: **0**.
- Exactly one candidate was tested; no variants, retries, alternate source, diff chase, finalization, integration, or build.
- Result: **symbol_missing**, score **0.0**. The faithful body compiled under `nslSetSourceParam__FUi17nslSoundParamEnumf`, not the required `...FUi18_nslSoundParamEnumf`, because the self-contained enum declaration did not preserve the released tagged-enum mangling.
- Tracked files modified: **false**. Finalized: **false**. Integrated: **false**.

## Outcome

The exact released sound-source parameter setter candidate compiled without emitting the target symbol; no source variant was attempted.
