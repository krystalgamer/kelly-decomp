# _$_14FanMeterWidget

- Address: `0x00168E18`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_fanmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_fanmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released FanMeterWidget destructor and class declaration. Reused the established generated deleting-destructor pattern with the exact derived vtable, sectionPQs offset, vector delete, and IGOWidget base destructor.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

Matched released FanMeterWidget destructor
