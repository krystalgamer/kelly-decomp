# __adjust_heap__H4ZPt4pair2ZP11nglListNodeZUiZiZt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X11X11X21X31_v

- Address: `0x003AAD60`
- Size: `0xDC` (220 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_heap.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 2.7273 | 0.0 | `candidate-round1.cpp` |
| 2 | different | 59.0909 | 50.9091 | `candidate-round2.cpp` |
| 3 | different | 19.0909 | 0.0 | `candidate-round3.cpp` |
| 4 | different | 59.0909 | 50.9091 | `candidate-round4.cpp` |
| 5 | different | 56.4655 | 48.2759 | `candidate-round5.cpp` |

### Attempt 1 notes

Wrapped the released heap-adjust template around a shared implementation. The wrapper did not inline and emitted only a 52-byte forwarding function.

### Attempt 2 notes

Lowered the standard adjust_heap body directly with the opaque pair comparator and target push_heap address. The sift-down loop aligned well, but the by-value pair setup and push tail were four bytes short.

### Attempt 3 notes

Treated the value argument as an ABI pointer to mirror the target register. This removed the wrapper copy but changed the call ABI and reduced the body to 208 bytes.

### Attempt 4 notes

Re-expressed the direct body with equivalent child-index algebra. GCC reproduced attempt 2 byte-for-byte at 216 bytes.

### Attempt 5 notes

Used a for-loop and explicit saved value before push_heap. The extra copy expanded the function to 232 bytes; attempt 2 remained best.

## Outcome

Deferred after five source-level attempts. The standard opaque-pair sift-down matched the target core loop, but the by-value pair ABI and push_heap tail remained four bytes shorter or expanded when preserved explicitly.
