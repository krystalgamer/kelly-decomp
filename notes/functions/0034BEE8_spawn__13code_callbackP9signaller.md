# spawn__13code_callbackP9signaller

- Address: `0x0034BEE8`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.9167 | 91.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released disabled check and indirect callback invocation, but incorrectly modeled this compiler's `bool` fields as one byte. That placed `func` at 0x1c instead of the target 0x14, leaving one instruction immediate different.

### Attempt 2 notes

The released disabled check and indirect callback invocation matched exactly after preserving the EE compiler's four-byte `bool` layout, which places `parms` at 0x0, `disabled` at 0x4, and `func` at 0x14.

## Outcome

The released code-callback spawn implementation matched exactly with the recovered callback layout.
