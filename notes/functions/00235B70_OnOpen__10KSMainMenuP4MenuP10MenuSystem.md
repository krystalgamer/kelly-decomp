# OnOpen__10KSMainMenuP4MenuP10MenuSystem

- Address: `0x00235B70`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.1111 | 0.0 | `candidate.cpp` |
| 2 | different | 19.4444 | 11.1111 | `candidate.cpp` |
| 3 | different | 50.0 | 44.4444 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an aggregate-copy, constant-folding, store-order, or call-delay scheduling mismatch.

### Attempt 2 notes

The second source shape fixed the constant or call structure but retained an independent-store schedule mismatch.

### Attempt 3 notes

The third shape isolated the remaining return-value or call-delay scheduling mismatch.

### Attempt 4 notes

The released handler clears the global pause workaround and forwards to `Menu::OnOpen`, with the store filling the call delay slot.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `KSMainMenu::OnOpen` wrapper matched exactly.
