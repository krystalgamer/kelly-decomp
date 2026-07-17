# set_time__11signal_animf

- Address: `0x0011DDC8`
- Size: `0x8` (8 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/signal_anim.cpp`
- Reference source: `KS/SRC/signal_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

An empty `signal_anim::set_time` body established that the emitted function
is a no-op in this build.

### Attempt 2 notes

The released method calls `anim<signal_key>::set_time`. Modeling that inline
base method as empty preserves the source-level call while GCC removes it,
still producing the exact no-op function.

## Outcome

The released method delegates to an inline anim<signal_key>::set_time implementation that is empty in this build. The source-faithful second candidate matched exactly and preserved the target ROM checksum.
