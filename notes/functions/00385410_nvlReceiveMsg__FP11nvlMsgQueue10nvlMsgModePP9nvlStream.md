# nvlReceiveMsg__FP11nvlMsgQueue10nvlMsgModePP9nvlStream

- Address: `0x00385410`
- Size: `0x18C` (396 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.5758 | 90.9091 | `candidate.cpp` |

### Attempt 1 notes

The exact released `nvlReceiveMsg` source and minimal faithful declarations compiled to the target 396-byte size on attempt one. The isolated comparison was different at 82.5758% (90.9091% instructions); no source variants or diff investigation were performed.

## Outcome

The exact released NVL message receive function differed at 82.5758% byte score; no source variant was attempted.
