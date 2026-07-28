# OnStart__23LostControllerMenuClassi

- Address: `0x001B3220`
- Size: `0x1AC` (428 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.578 | 1.8349 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave76 A5 — 0x001B3220

- Confirmed no inherited attempt existed.
- Submitted exactly one candidate using the released
  `PauseMenuSystem::endDraw` body corresponding to the target instructions,
  under the target `LostControllerMenuClass::OnStart(int)` signature, with
  minimal standalone declarations.
- Result: `different`, 18.578% bytes and 1.8349% instructions; 436-byte
  candidate versus 428-byte target.
- Preserved attempt 1 unchanged and stopped. No variants, diff chasing,
  finalization, integration, build, commit, or tracked-file edit.

Citations:
- `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.cpp:2990-3025`
- `tmp/functions/001B3220_OnStart__23LostControllerMenuClassi/attempt-1/result.json`
- `tmp/source_first/001B3220/attempt-1.md`

## Outcome

The exact released lost-controller start handler differed at 18.5780% byte score; no source variant was attempted.
