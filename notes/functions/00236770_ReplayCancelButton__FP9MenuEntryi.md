# ReplayCancelButton__FP9MenuEntryi

- Address: `0x00236770`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The exact released callback matched immediately.  It reuses the shared
ksdbmenu/MenuSystem context from the preceding callback and extends the
existing source-faithful `KSReplay` declaration with `Pause`.

## Outcome

Matched the released replay-cancel callback by reusing the shared debug-menu, menu-system, and replay contexts.
