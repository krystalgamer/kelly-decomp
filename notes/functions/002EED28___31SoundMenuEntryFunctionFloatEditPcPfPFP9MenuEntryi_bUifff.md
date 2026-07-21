# __31SoundMenuEntryFunctionFloatEditPcPfPFP9MenuEntryi_bUifff

- Address: `0x002EED28`
- Size: `0x44` (68 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/menusound.cpp`
- Reference source: `KS/SRC/menuSound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 89.7059 | 88.8889 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 95.5882 | 94.4444 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Restored the released callback type, then the authentic MenuEntry base/derived layout that places the vptr at +4 and source ID at +60. The interface pragma keeps the reviewed released vtable external so its absolute alias resolves exactly.

## Outcome

The released sound float-edit menu constructor matches exactly.
