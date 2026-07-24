# clearEvents__18SoundScriptManager

- Address: `0x0031BEC0`
- Size: `0x68` (104 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read both 100-element event arrays, their strides and clear helpers, and numEvents offset. The released loop matched on attempt 1.

## Outcome

Matched sound script event clearing
