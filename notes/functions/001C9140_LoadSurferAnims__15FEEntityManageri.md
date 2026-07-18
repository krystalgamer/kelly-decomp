# LoadSurferAnims__15FEEntityManageri

- Address: `0x001C9140`
- Size: `0x18` (24 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEEntityManager.cpp`
- Reference source: `KS/SRC/ks/FEEntityManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method returns if `mm_anims_loaded` at `0x4` is set, otherwise sets it.

## Outcome

The released `FEEntityManager::LoadSurferAnims` guard matched exactly on the first attempt.
