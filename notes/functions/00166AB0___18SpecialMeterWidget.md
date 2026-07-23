# __18SpecialMeterWidget

- Address: `0x00166AB0`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_specialmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_specialmeter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.0909 | 68.1818 | `candidate.cpp` |
| 2 | different | 71.5909 | 68.1818 | `candidate.cpp` |
| 3 | different | 90.9091 | 86.3636 | `candidate.cpp` |
| 4 | different | 81.8182 | 72.7273 | `candidate.cpp` |
| 5 | different | 88.6364 | 86.3636 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released SpecialMeterWidget constructor, IGOWidget base call, vtable/field offsets, null pointer fields, and flash defaults. All operations were present but constant materialization order differed.

### Attempt 2 notes

Constrained the vtable and flash direction to target integer registers. This moved float constant materialization later and regressed.

### Attempt 3 notes

Assigned flash amount first to induce target constant order. Constants matched more closely, but the flash store moved before vtable/direction stores (90.91%).

### Attempt 4 notes

Forced early float materialization while restoring released assignment order. Integer constants and stores were still grouped differently.

### Attempt 5 notes

Constrained all three constants to target registers and ordered stores explicitly. The compiler retained an equivalent three-instruction constant/store schedule mismatch.

## Outcome

Released SpecialMeterWidget constructor remained blocked by equivalent constant/store scheduling after five source-level attempts.
