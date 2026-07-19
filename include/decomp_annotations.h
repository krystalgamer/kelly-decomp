#ifndef KELLY_DECOMP_ANNOTATIONS_H
#define KELLY_DECOMP_ANNOTATIONS_H

// Matching-only compiler control, not recovered original source. It emits no
// instruction and is allowed only when the function note explains the exact
// scheduling or sibling-call mismatch that requires it.
#define KELLY_DECOMP_COMPILER_BARRIER() __asm__ volatile("")

#endif
