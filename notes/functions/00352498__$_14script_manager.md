# _$_14script_manager

- Address: `0x00352498`
- Size: `0x100` (256 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.2031 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Released-source first pass: exact destructor body from KS/SRC/script_object.cpp:782-785, with only the required class declarations copied from script_object.h and an address binding for _destroy. The single test compiled but differed (8.2031% byte score, 0 instruction score); no rewrite or second attempt was made.

## Outcome

The exact released script-manager destructor differed from the target; the sole attempt scored 8.2031%.
