# __15script_callbackPQ213script_object8instancePC13vm_executablePCc

- Address: `0x0034BCD8`
- Size: `0xB4` (180 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.3333 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released constructor matched with a shared source-faithful callback hierarchy and existing `vm_executable` declaration. The allocation description symbol preserves the linked `__PRETTY_FUNCTION__` address used by the released `NEW` macro in isolated compilation.

## Outcome

Matched the released script-callback constructor using shared callback inheritance and VM executable declarations.
