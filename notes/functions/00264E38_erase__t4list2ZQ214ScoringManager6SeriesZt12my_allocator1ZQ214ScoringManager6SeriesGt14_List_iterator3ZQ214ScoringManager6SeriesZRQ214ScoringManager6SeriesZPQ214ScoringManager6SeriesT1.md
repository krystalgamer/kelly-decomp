# erase__t4list2ZQ214ScoringManager6SeriesZt12my_allocator1ZQ214ScoringManager6SeriesGt14_List_iterator3ZQ214ScoringManager6SeriesZRQ214ScoringManager6SeriesZPQ214ScoringManager6SeriesT1

- Address: `0x00264E38`
- Size: `0xD8` (216 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.963 | 14.8148 | `candidate.cpp` |
| 2 | different | 39.8148 | 14.8148 | `candidate.cpp` |
| 3 | different | 20.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 41.6667 | 14.8148 | `candidate.cpp` |
| 5 | different | 41.6667 | 14.8148 | `candidate.cpp` |

### Attempt 1 notes

Exact SGI STL 3.3/GCC2 range-erase body:

`while (__first != __last) erase(__first++); return __last;`

The candidate also used source-shaped `_List_node_base`, `_List_node`,
`_List_iterator`, `_List_base`, `simple_alloc`, and `my_allocator`
declarations plus the concrete 20-byte `ScoringManager::Series`.

Result: different, 37.9630% bytes, 14.8148% instructions, 184 bytes versus
216. The range loop and single-node unlink were recognized, but GCC emitted
an out-of-line `_Destroy<Series>` call instead of inlining the implicit
`Series -> list<Trick> -> _List_base<Trick>` destructor chain found in the
target.

### Attempt 2 notes

Kept the released range-erase body and declarations, but replaced the
`_Destroy(&__n->_M_data)` helper call in single-element erase with its direct
source-level destructor expression `__n->_M_data.~_Tp()`.

Result: different, 39.8148% bytes, 14.8148% instructions, 188 bytes. GCC
removed the `_Destroy<Series>` wrapper but still called the generated
`ScoringManager::Series` destructor out of line, whereas the target inlines
the complete member/base destruction chain.

### Attempt 3 notes

Introduced a reusable list storage-destruction operation and a
`ScoringManager::Series` destruction overload, while retaining the exact
released range-erase loop. The single-element erase definition was moved
out of class so the overload was visible.

Result: different, 20.8333% bytes, 0% instructions, 152 bytes. The desired
nested cleanup did flatten, but moving single-element erase out of class
removed its implicit-inline status. The range erase therefore called the
single erase function instead of inlining it as the target does.

### Attempt 4 notes

Restored inline single-element erase and used a reusable `_Destroyer<T>`
policy, specialized for `ScoringManager::Series`, to flatten the known
member/base cleanup while preserving the exact released range loop.

Result: different, 41.6667% bytes, 14.8148% instructions, 200 bytes. This is
the best result through attempt 4. It reproduces every semantic operation:
post-increment, unlink, Trick-list clear call, both allocator free-list
pushes, loop, and returned iterator. Remaining differences are GCC2
callee-saved register assignment, iterator stack reloads, and branch-delay
scheduling.

### Attempt 5 notes

Kept the exact released range-erase body and the inline single-element erase,
then shaped the reusable destruction policy as nested ABI-style
`_M_destroy(2)` calls for `Series`, `list<Trick>`, and `_List_base`.

Result: different, 41.6667% bytes, 14.8148% instructions, 200 bytes. It is
code-identical to attempt 4, so the extra ABI-shaped source layers are fully
inlined and do not resolve the remaining register/stack scheduling gap.
Exactly five distinct source-level attempts have now been tested.

## Outcome

Deferred after five source-level attempts. The exact GCC2 list erase template and allocator behavior were reconstructed, but the best instantiation remained 41.6667% because the shipped specialization used different inlining and register scheduling.
