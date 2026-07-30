# Select__14ExtrasFrontEndi

- Address: `0x001B95D8`
- Size: `0x43C` (1084 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/ExtrasFrontEnd.cpp`
- Reference source: `KS/SRC/ks/ExtrasFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 50.6458 | 42.8044 | `candidate.cpp` |
| 3 | different | 98.4317 | 98.155 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave 171 A3
Target: 0x001B95D8 Select__14ExtrasFrontEndi
Released source: kelly-slaters-pro-surfer/KS/SRC/ks/ExtrasFrontEnd.cpp, exact Select body and released headers/declarations only.
Attempt 1: compile_failed; the Wine-hosted compiler could not resolve the POSIX absolute released global.h include path.
No alternate candidate, retries, diff chasing, tool changes, finalization, build, commit, or push performed. No tracked files changed.

### Attempt 2 notes

Attempt 2 compiled the exact released `ExtrasFrontEnd::Select` body from
`kelly-slaters-pro-surfer/KS/SRC/ks/ExtrasFrontEnd.cpp:273-369` against the
shared source-faithful `FEMenu`, `FEMultiMenu`, `GraphicalMenuSystem`,
`SoundScriptManager`, and `ExtrasFrontEnd` declarations.

The PS2 branch compiled to 1016 bytes and matched 549/1084 bytes and 116/271
instructions (50.6458% bytes, 42.8044% instructions). The target showed built
source not present in the released body: credits use movie slot 3, demo launch
shuts NSL down, demo cancellation resets the secondary cursor, and the helpbar
is refreshed.

### Attempt 3 notes

Attempt 3 retained the released switch and applied only the target-observed
built-source differences: `PlayMovie(3)` for credits,
`nslReleaseAllSounds`/`nslFrameAdvance(0)`/`nslShutdown` before launching the
demo executable, built-slot secondary-cursor reset, and `UpdateHelpbar()` after
cancel.

The candidate reached the exact 1084-byte target size and matched 1067/1084
bytes and 266/271 instructions (98.4317% bytes, 98.1550% instructions). The
five remaining instructions are independent scheduling differences: the
three zero arguments for `scePcStart` are prepared in a different order, and
the `saveCareerPrompt` store is scheduled before rather than after loading the
secondary-cursor vtable. No artificial inline assembly was added.

## Outcome

The exact released ExtrasFrontEnd::Select body was reconstructed with shared frontend declarations and the target-observed built-source changes, reaching exact size and 98.4317% byte agreement; five independent scheduling instructions remained different after three attempts.
