# getInfo__16GenericGameSaveriiPiN23

- Address: `0x001E3DC0`
- Size: `0x198` (408 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.3137 | 87.5 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Result: **different**
- Byte score: **84.3137%**
- Instruction score: **87.5%**
- Candidate size: **400 bytes**; target size: **408 bytes**.
- Used the exact released `GenericGameSaver::getInfo` PS2 body with only minimal declarations and symbol bindings required for isolated compilation.
- Preserved the initial repeated-pointer mangling infrastructure failure under `infrastructure-symbol-failure/`; it was repaired without changing the released body before the single canonical attempt.
- No variants, disassembly/diff chasing, build, finalization, integration, tracked-file edits, commit, or Git operations were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_gamesaver.cpp:369-509` — exact released function body.
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_gamesaver.h:30-35,72-104` — released result constants and method declaration.
- `tmp/functions/001E3DC0_getInfo__16GenericGameSaveriiPiN23/attempt-1/candidate.cpp` — isolated exact-source candidate.
- `tmp/functions/001E3DC0_getInfo__16GenericGameSaveriiPiN23/attempt-1/result.json` — canonical isolated test result.

## Outcome

The exact released game-saver information query differed at 84.3137% byte score; no source variant was attempted.
