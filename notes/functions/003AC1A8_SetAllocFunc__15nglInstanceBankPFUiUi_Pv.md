# SetAllocFunc__15nglInstanceBankPFUiUi_Pv

- Address: `0x003AC1A8`
- Size: `0x10` (16 bytes)
- Object: `ngl/ngl_instbank`
- Debug source: `C:/NGL/ps2/ngl_instbank.cpp`
- Reference source: `NGL/PS2/ngl_instbank.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released static setter exchanges the allocation callback global at `0x00512220`.

## Outcome

The released `nglInstanceBank::SetAllocFunc` callback exchange matched exactly on the first attempt.
