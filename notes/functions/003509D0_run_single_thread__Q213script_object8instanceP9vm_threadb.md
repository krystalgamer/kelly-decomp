# run_single_thread__Q213script_object8instanceP9vm_threadb

- Address: `0x003509D0`
- Size: `0xD8` (216 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.6296 | 29.6296 | `candidate.cpp` |
| 2 | different | 72.6852 | 42.5926 | `candidate.cpp` |
| 3 | different | 61.3636 | 40.0 | `candidate.cpp` |
| 4 | different | 52.4194 | 33.871 | `candidate.cpp` |
| 5 | different | 66.5179 | 28.5714 | `candidate.cpp` |

### Attempt 1 notes

Exact released body with faithful instance/vm_thread layout and a typed local reconstruction of the GCC list iterator/erase path. External method and allocator addresses were equated. The typed iterator over-optimized the loop and erase, producing 188 bytes versus 216 and a 54.6296% byte score.

### Attempt 2 notes

Replaced the typed iterator with the repository shared-header style void-pointer iterator base. This recovered the exact 96-byte frame and most iterator spills, yielding 208 bytes and 72.6852%. Remaining differences showed that the real STL list base/_M_put_node hierarchy controls register allocation and reloads.

### Attempt 3 notes

Modeled the GCC 2.95 `_List_base` inheritance and `_M_put_node` helper. The erase sequence became nearly identical, but the optimizer retained the sentinel in a register, adding a move/NOP and producing 220 bytes; score regressed to 61.3636%.

### Attempt 4 notes

Made the list sentinel member volatile to force the target's repeated `end()` reload. This was too strong: it introduced extra stack loads and expanded the function to 248 bytes, scoring 52.4194%. The useful constraint is allocator free-list volatility, not sentinel volatility.

### Attempt 5 notes

Modeled GCC allocator deallocation through a volatile free-list pointer. This forced excessive spills and a 112-byte frame; the candidate was 224 bytes and scored 66.5179%. Five-attempt limit reached. Attempt 2 remains best at 72.6852%.

## Outcome

Deferred after five source-level attempts. The best source-faithful single-thread runner reached 72.6852%, but list traversal, thread dispatch, and cleanup scheduling remained different.
