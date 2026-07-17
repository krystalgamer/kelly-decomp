# Excluded code

The function inventory records the evidence for each individual function.

## Handwritten assembly

Known PS2 startup, VU, DMA, and other assembly-authored routines remain
assembly. Rewriting these in C/C++ is outside the selected queue.

## SDK and runtime

Sony SDK libraries, newlib/libio, libgcc/libstdc++, compiler support, and
startup/runtime routines are excluded from the game/engine queue.

## Third-party libraries

The linked zlib routines are excluded. Public NGL, NSL, and NVL engine code
remains eligible.

## Unmapped symbols

`sn_reg_frame` and `sn_dereg_frame` have no matching `.mdebug` procedure
ownership and remain excluded.
