# nslGetSourceName__FUi

- Address: `0x0038C2A0`
- Size: `0x108` (264 bytes)
- Object: `nsl/nsl_ps2_source`
- Debug source: `C:/NSL/PS2/nsl_ps2_source.cpp`
- Reference source: `NSL/PS2/nsl_ps2_source.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 4.9242 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Used the exact released `nslGetSourceName` body and the exact inlined source-ID validation logic. Added only self-contained type/layout, constants, symbol bindings, and macro declarations required to compile that body while preserving the released field offsets.

## Outcome

The exact released NSL source-name getter differed from the target; the sole attempt scored 4.9242%.
