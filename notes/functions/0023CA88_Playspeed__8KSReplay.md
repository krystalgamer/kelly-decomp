# Playspeed__8KSReplay

- Address: `0x0023CA88`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.8947 | 47.3684 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `ksreplay.cpp:1030-1038` packet.  The shared
`KSReplay` prefix was expanded with the released playback fields.  Rewriting
the equivalent final `else if` as an explicit negative fast-forward guard
reproduced the shipped branch layout.

## Outcome

Matched replay playback speed using the retained immutable source and shared KSReplay layout.
