# startEvent__18SoundScriptManager9EventTypeP6entityf

- Address: `0x0031C360`
- Size: `0x1C` (28 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `start_event_2.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Declaring `EventType` as nested produced the wrong qualified mangling. The global enum shape matches the ELF symbol and preserves the forwarding wrapper.

## Outcome

`SoundScriptManager::startEvent` matched exactly after recovering the global `EventType` ABI.
