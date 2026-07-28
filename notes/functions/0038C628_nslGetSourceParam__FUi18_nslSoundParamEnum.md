# nslGetSourceParam__FUi18_nslSoundParamEnum

- Address: `0x0038C628`
- Size: `0x1B8` (440 bytes)
- Object: `nsl/nsl_ps2_source`
- Debug source: `C:/NSL/PS2/nsl_ps2_source.cpp`
- Reference source: `NSL/PS2/nsl_ps2_source.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.1818 | 1.8182 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 notes

- Exact released body: `kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2_source.cpp:370-388`.
- Faithful declarations/layout citations: `kelly-slaters-pro-surfer/NSL/COMMON/nsl.h:131-139`; `kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2.h:35-108,125-153,219-268,345-386`.
- Target metadata: `tmp/functions/0038C628_nslGetSourceParam__FUi18_nslSoundParamEnum/metadata.json`; assembly inspected before testing: `tmp/functions/0038C628_nslGetSourceParam__FUi18_nslSoundParamEnum/target.s`.
- Sole test result: `different`, byte score 13.1818% (58/440), instruction score 1.8182% (2/110), candidate size 252, target size 440, SHA-1 `6cd8d8462febad601d9345ca3672107f4c052485`.
- Exactly one candidate and one `function_test.py test` invocation; no retry, alternate body, diff chasing, build, finalize, integration, tracked edit, or git mutation.

## Outcome

The exact released sound-source parameter query body differed at 13.1818% byte score; no source variant was attempted.
