# createMapping__18SoundScriptManager9EventTypeUi

- Address: `0x0031C628`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Modeled EventType as int. The body compiled, but the method emitted the incompatible `createMapping__18SoundScriptManageriUi` symbol and could not be scored against the target ABI.

### Attempt 2 notes

The released event-map indexing and type assignment use the shared sound
manager declaration. A local mapping-function pointer preserves the call.

## Outcome

The local layout and compiler barrier were removed; the released mapping
creation remains exact.
