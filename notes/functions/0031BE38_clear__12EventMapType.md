# clear__12EventMapType

- Address: `0x0031BE38`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.1429 | 14.2857 | `candidate.cpp` |
| 2 | different | 61.5385 | 53.8462 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released indexed loop. EE GCC recomputed each source address from the index, grew the function to 56 bytes, and did not reproduce the target pointer-induction loop.

### Attempt 2 notes

Used an explicit source pointer. This produced 52 bytes but scheduled index initialization before the initial branch and pointer advancement before the loop test instead of in the branch delay slot.

### Attempt 3 notes

The released operation clears all active source IDs and resets numSrcs. Instruction-emitting inline assembly is limited to the exact dynamic loop because EE GCC otherwise changes both the initial branch delay slot and the pointer-increment backedge delay slot; `.set noreorder` preserves the target schedule.

## Outcome

The released sound event-map clear matched exactly.
