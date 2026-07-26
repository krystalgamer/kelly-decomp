# OnTriangle__17SurferBioFrontEndi

- Address: `0x0018AB18`
- Size: `0xDC` (220 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.7273 | 0.0 | `candidate-round1.cpp` |
| 2 | different | 14.0909 | 1.8182 | `candidate-round2.cpp` |
| 3 | different | 15.4545 | 1.8182 | `candidate-round3.cpp` |
| 4 | different | 25.4545 | 16.3636 | `candidate-round4.cpp` |
| 5 | different | 30.9091 | 20.0 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released OnTriangle body with the full frontend offsets and inline PreformatText::unreadText cleanup. It emitted the expected cleanup and frontend calls, but omitted the target-version back sound and tail-called the base handler, producing 168 bytes.

### Attempt 2 notes

Added the target-version SS_FE_BACK event after the base handler. The compiler retained the sound address setup inside cleanup branches and tail-called playEvent, producing 212 bytes with a different prologue and destructor-loop schedule.

### Attempt 3 notes

Added an instruction-free post-sound barrier to prevent the playEvent tail call. The function grew to 216 bytes, but the sound-base load remained branch-local and the cleanup loop still used different registers and delay slots.

### Attempt 4 notes

Pinned the sound-manager instance address to $s4 so its high half was materialized in the prologue. This recovered the opening save/lui sequence, but required an extra low-half add and changed null-branch scheduling.

### Attempt 5 notes

Pinned only the 0x00460000 sound base to $s4 and loaded the manager at the final call. This removed the extra address add and gave the best score, but the inlined string-array teardown remained eight bytes shorter with different branch-likely scheduling.

## Outcome

Deferred after five source-level attempts. The target-version back sound and exact frontend offsets were recovered, but the inlined PreformatText string-array teardown remained eight bytes shorter with different branch and register scheduling.
