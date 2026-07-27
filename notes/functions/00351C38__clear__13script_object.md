# _clear__13script_object

- Address: `0x00351C38`
- Size: `0xF4` (244 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.1311 | 67.2131 | `candidate.cpp` |

### Attempt 1 notes

Exact released `script_object::_clear` body with authentic `vm_symbol_list`, `so_data_block`, and vector declarations. It emitted the exact 244-byte operation sequence and calls, but EE GCC scheduled the list-resize and vector-insert argument setup in different delay slots from the target.

## Outcome

Exact released clear sequence differed only in call-argument scheduling.
