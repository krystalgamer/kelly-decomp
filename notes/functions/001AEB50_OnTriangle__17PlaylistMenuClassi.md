# OnTriangle__17PlaylistMenuClassi

- Address: `0x001AEB50`
- Size: `0xF8` (248 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.0806 | 1.6129 | `candidate.cpp` |

### Attempt 1 notes

Exact released `PlaylistMenuClass::OnTriangle` body with the authentic MusicMan/MusicListing, sound-script, pause-menu, and global pause-count declarations. In isolation EE GCC kept the released inline `MusicMan::pause` and `MusicListing::pause` helpers out of line and tail-called the base menu handler, producing a 200-byte caller instead of the target's 248-byte fully inlined form.

## Outcome

Exact released playlist back action differed because music pause helpers were not inlined.
