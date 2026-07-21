# MemoryDump__FP9MenuEntryi

- Address: `0x002368B8`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 4.4118 | 0.0 | `memorydump_candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `memorydump_candidate.cpp` |
| 3 | different | 75.0 | 64.7059 | `memorydump_candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Tested the neighboring MemoryScreen debug-flag toggle instead of the released MemoryDump body. It omitted both released calls and produced a 52-byte mismatch.

### Attempt 2 notes

Restored `mem_dump_heap(0)` but guessed a direct call through `MenuSystem::curmenu`. The candidate did not compile because the modeled `curmenu` member was private.

### Attempt 3 notes

Made the guessed `curmenu` layout public and called `Menu::ButtonRelease`. It reached the correct size but contradicted the released `menus->CloseMenu()` call chain and used the wrong object offset and dispatch.

### Attempt 4 notes

Restored the exact released `mem_dump_heap()` then `menus->CloseMenu()` call chain. Modeling the primary `MenuRender` vtable at `MenuSystem` offset `0x458` and its `CloseMenu` entry at `0x18` reproduced all 68 bytes.

## Outcome

The released cross-button callback calls mem_dump_heap on the default system heap and then virtually dispatches MenuSystem::CloseMenu. Recovering the MenuRender vtable at offset 0x458 matched all 68 bytes on attempt four and preserved the byte-identical ROM.
