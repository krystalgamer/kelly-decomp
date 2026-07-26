# erase__t4list2Z9vm_symbolZt12my_allocator1Z9vm_symbolGt14_List_iterator3Z9vm_symbolZR9vm_symbolZP9vm_symbolT1

- Address: `0x0035BF70`
- Size: `0xDC` (220 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.5455 | 21.8182 | `candidate-round1.cpp` |
| 2 | different | 37.2727 | 20.0 | `candidate-round2.cpp` |
| 3 | different | 38.1818 | 20.0 | `candidate-round3.cpp` |
| 4 | different | 38.1818 | 20.0 | `candidate-round4.cpp` |
| 5 | different | 33.6364 | 5.4545 | `candidate-round5.cpp` |

### Attempt 1 notes

Instantiated the released list range erase with reconstructed iterators, nodes, vm_symbol, allocator pool, and deallocation. An out-of-line vm_symbol destructor and cached iterator node reduced the candidate to 192 bytes.

### Attempt 2 notes

Inlined the two string destructions through a vm_symbol destroy helper. GCC further shortened the body to 188 bytes and still cached the node across link updates.

### Attempt 3 notes

Repeated node expressions to encourage the target reload pattern. The candidate returned to 192 bytes but retained the same core scheduling differences.

### Attempt 4 notes

Tried preserving each erased iterator temporary across the loop. Removing the invalid template barrier yielded the same 192-byte result as attempt 3.

### Attempt 5 notes

Lowered the range erase directly in the loop to control first-node advancement and unlink order. GCC optimized away the iterator temporary and reduced the function to 176 bytes.

## Outcome

Deferred after five source-level attempts. Iterator advancement, node unlinking, both vm_symbol string destructions, allocator return, and range result were reconstructed, but GCC cached the node and optimized away target iterator temporaries.
