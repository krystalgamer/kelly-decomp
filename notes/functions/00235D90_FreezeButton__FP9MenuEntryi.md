# FreezeButton__FP9MenuEntryi

- Address: `0x00235D90`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released FreezeButton macro body and relevant app/game/MenuSystem/global declarations. Reconstructed the pause hack flag, singleton offsets, menu close call, repeated pause calls, and true return.

## Outcome

Matched released FreezeButton body
