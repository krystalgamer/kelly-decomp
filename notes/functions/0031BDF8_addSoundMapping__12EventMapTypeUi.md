# addSoundMapping__12EventMapTypeUi

- Address: `0x0031BDF8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.6667 | 20.0 | `candidate.cpp` |
| 2 | different | 26.6667 | 13.3333 | `candidate.cpp` |
| 3 | different | 36.6667 | 20.0 | `candidate.cpp` |
| 4 | different | 36.6667 | 20.0 | `candidate.cpp` |
| 5 | different | 58.3333 | 46.6667 | `candidate.cpp` |

### Attempt 1 notes

The literal released conditional assignment preserved behavior but copied this to a2 and used different return control flow.

### Attempt 2 notes

Early invalid-input returns retained a different register allocation and branch layout.

### Attempt 3 notes

An explicit source index and increment retained the original candidate's 36.67% schedule.

### Attempt 4 notes

An explicit receiver function using the released symbol also copied the receiver and retained the mismatch.

### Attempt 5 notes

A joined result variable reduced the function to 52 bytes and did not reproduce the two target return blocks.

## Outcome

Five source-authentic mapping forms reproduced behavior but could not recover the target receiver/register and return-block schedule.
