# Select__12MultiSubMenui

- Address: `0x00184798`
- Size: `0xD8` (216 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 9.7222 | 0.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 96.2963 | 96.2963 | `candidate.cpp` |
| 4 | different | 96.2963 | 96.2963 | `candidate.cpp` |
| 5 | different | 96.2963 | 96.2963 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released body

Used the released `MultiSubMenu::Select` body verbatim with narrow replicas of
`FEManager`, `game`, `FEMenu`, `FEMenuSystem`, `GraphicalMenuSystem`, and
`MultiSubMenu`.

Result: 9.7222% bytes, 0/54 instructions, 132-byte candidate versus 216-byte
target. The candidate has the correct `tmp_game_mode`, `push`, `time`,
`multiplayer_difficulty`, and `FEMenuSystem::MakeActive` offsets, but it lacks
the target's initial `SS_FE_ONX` call. It also merges the two assignments before
one unconditional `system->MakeActive`, while the target has distinct branch
tails: `parent->MakeActive(parent->field_2A8)` for time attack and
`system->MakeActive(SurferMenu)` otherwise.

### Attempt 2 notes

# Attempt 2 — target-version control flow

Added the target-observed `SS_FE_ONX` call and split the mode branches:
time attack assigns `time[entry_index]` and activates the parent field at
`0x2A8`; other modes assign `push[entry_index]` and activate SurferMenu.

Result: compile failure. `MultiControllerMenu` was only forward-declared, so
the compiler could not convert `MultiControllerMenu*` to the `FEMenu*`
parameter of `FEMenu::MakeActive`. The source hypothesis remains valid; the
next candidate supplies the released inheritance relationship.

### Attempt 3 notes

# Attempt 3 — complete class relationship

Defined `MultiControllerMenu` as a `FEMenu`, preserving the target-version
control flow from attempt 2 while using the shared `FEMenu` and sound
declarations.

Result: 96.2963%, 208/216 bytes and 52/54 instructions. Candidate and target
are both exactly 216 bytes. Every instruction matches except the order of two
independent prologue operations: the candidate saves `entry_index` to `s1`
before loading the sound-manager singleton, while the target loads the
singleton first. The remaining body, offsets, branches, virtual slots, and
epilogue match exactly.

### Attempt 4 notes

# Attempt 4 — direct singleton declaration

Replaced `SoundScriptManager::inst()` with the direct singleton symbol used by
matched neighboring front-end functions, while retaining the same member call
and all reconstructed control flow.

Result: unchanged at 96.2963%, 208/216 bytes and 52/54 instructions. The direct
singleton spelling still schedules the `s1 = entry_index` move before the
singleton load. The fifth candidate changes only the call declaration to the
shared-symbol free-function form already used successfully by nearby matched
front-end code.

### Attempt 5 notes

# Attempt 5 — free-function sound symbol

Kept the 216-byte reconstructed body and declared the sound call as an
`extern "C"` function with the released member-function symbol, following the
matched `MultiControllerMenu::Select` prior art in `MainFrontEnd.cpp`.

Result: 96.2963%, 208/216 bytes and 52/54 instructions. As in attempts 3 and
4, only target instructions `0x1847B0` and `0x1847B4` differ in position:
target loads `sound_manager` then moves `entry_index` into `s1`; candidate
moves `entry_index` then loads `sound_manager`. All opcodes and operands are
otherwise identical, and the complete 216-byte shape matches. Five attempts
are exhausted, so this function remains unmatched.

## Outcome

Deferred after five source-level attempts. The recovered target-version body reached 208/216 bytes; only two independent prologue instructions remain scheduled in the opposite order.
