# register_entity_widget_lib__Fv

- Address: `0x003162F0`
- Size: `0xE0` (224 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_entity_widget.cpp`
- Reference source: `KS/SRC/script_lib_entity_widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 73.2143 | `candidate-round1.cpp` |
| 2 | different | 83.0357 | 78.5714 | `candidate-round2.cpp` |
| 3 | different | 82.5893 | 76.7857 | `candidate-round3.cpp` |
| 4 | different | 37.0536 | 28.5714 | `candidate-round4.cpp` |
| 5 | different | 60.2679 | 51.7857 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The released entity-widget registrations, object sizes, constructors, strings, and vtables are recovered, but operator-new argument setup and callee-save scheduling remain reordered; an exact result would require instruction-order control outside released source.
