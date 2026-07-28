# findMostRecentGame__16MCDetectFrontEndRiT1R8saveInfo

- Address: `0x001A4618`
- Size: `0x19C` (412 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MCDetectFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MCDetectFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.0 | 10.9091 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- Confirmed there were no prior attempts.
- Copied the exact active released `MCDetectFrontEnd::findMostRecentGame(int &, int &, saveInfo &)` body from `kelly-slaters-pro-surfer/KS/SRC/ks/MCDetectFrontEnd.cpp:354-397`.
- Added minimal self-contained declarations from the released PS2 game-saver interface.
- Ran `function_test` exactly once. Result: `different`, byte score 35.0%, instruction score 10.9091%.
- Candidate size was 440 bytes versus the 412-byte target.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, or tracked-file edits were performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/MCDetectFrontEnd.cpp:354-397`
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_gamesaver.h:26-50,72-94`
- `config/SLUS_203.34.symbol_addrs.txt`
- `tmp/functions/001A4618_findMostRecentGame__16MCDetectFrontEndRiT1R8saveInfo/attempt-1/result.json`

## Outcome

The exact released recent-game search differed at 35.0000% byte score; no source variant was attempted.
