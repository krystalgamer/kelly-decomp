# _$_15element_manager

- Address: `0x002CA2A8`
- Size: `0xD8` (216 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/element.cpp`
- Reference source: `KS/SRC/element.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 17.5926 | 3.7037 | `candidate.cpp` |
| 3 | different | 78.3898 | 66.1017 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 5 | different | 89.8148 | 85.1852 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Used the exact released destructor body and source-faithful class/member
context. Compilation failed because the translation unit emitted
`_vt$15element_manager`, conflicting with the target-address equate.

### Attempt 2 notes

# Attempt 2

Added legacy `#pragma interface` to retain the exact released destructor body
while suppressing the local vtable definition. It compiled, but emitted
out-of-line implicit destructors for `font_def`, `refptr`, and the context list.

- Byte score: 17.5926%
- Instruction score: 3.7037%
- Candidate size: 112 bytes

### Attempt 3 notes

# Attempt 3

Expanded the released body into its compiler-visible implicit teardown using
narrow layout declarations and address equates.

- Byte score: 78.3898%
- Instruction score: 66.1017%
- Candidate size: 236 bytes

The font/list/string sequence was almost instruction-for-instruction exact.
Differences were the first texture pointer register, signed-low absolute
address handling for `font` and the singleton vtable, and a final tail call.

### Attempt 4 notes

# Attempt 4

Matched exactly after:

- expressing `refptr::subref()` as repeated member access so GCC used `v1`
  for the first texture pointer and reloaded `a2` for virtual deletion;
- compensating the old assembler's signed-low absolute-address carry for
  `font` and the singleton vtable equates;
- retaining a source barrier after conditional object deletion to prevent
  tail-call conversion.

- Byte score: 100.0% (216/216)
- Instruction score: 100.0% (54/54)
- Candidate size: 216 bytes
- Status: matched

### Attempt 5 notes

Re-tested the expanded teardown through source-faithful class helpers. The destructor body after the prologue matched, but hidden-vptr access changed eight prologue scheduling instructions; the tested shared ABI projection from attempt 4 remains byte-exact.

## Outcome

Matched the released element-manager destruction through a consolidated element teardown ABI context that preserves the inlined font, list, string, singleton, and deleting-destructor behavior.
