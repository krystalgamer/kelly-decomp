# OnStart__13TitleFrontEndi

- Address: `0x001DE340`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.h`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal frontend vtable layout preserves the virtual title start adjustment/function slots and null forwarded argument.

## Outcome

The released `TitleFrontEnd::OnStart` wrapper matched exactly.
