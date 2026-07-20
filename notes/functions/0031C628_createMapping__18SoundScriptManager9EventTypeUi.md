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

The released 0x80-byte event-map indexing, type assignment, and addSoundMapping call matched exactly. The trailing empty barrier preserves the framed call while returning its bool result.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released sound mapping creation matched exactly.
