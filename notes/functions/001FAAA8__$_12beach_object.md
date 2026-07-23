# _$_12beach_object

- Address: `0x001FAAA8`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released beach_object declaration and empty destructor, including vtable/path offsets, stringx destruction, and deleting-mode behavior. The established generated-destructor pattern matched byte-exactly.

## Outcome

Matched generated beach_object destructor
