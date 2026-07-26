# AnimComplete__22kellyslater_controller

- Address: `0x00212D78`
- Size: `0xD8` (216 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 44.9074 | 22.2222 | `candidate.cpp` |
| 2 | different | 44.9074 | 22.2222 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 61.1111 | 40.7407 | `candidate.cpp` |
| 5 | different | 55.0926 | 33.3333 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released `AnimComplete` body with `ANIM_PRIMARY` resolved to
zero and reconstructed original inline ownership/tree/control declarations.
The compiler emitted the right logic but cached `flags`, chose different
control-pointer registers, and omitted two target floating hazard nops.

### Attempt 2 notes

Kept the released function and declarations but marked the reconstructed
`flags` storage volatile to discourage cross-call flag caching. The old
compiler still emitted byte-identical code to attempt 1, including the cached
flag word and shorter floating schedule.

### Attempt 3 notes

Tried to compile the exact released body against the released
`controller.h`/animation class context rather than reconstructed stand-ins.
The candidate failed before compilation because this compiler resolves the
relative quoted path from its working directory, not the saved attempt file.

### Attempt 4 notes

Expanded the released inline helpers with non-emitting compiler barriers and
the real polymorphic `entity_anim_tree` base layout. This forced separate flag
loads and both target floating hazard slots, producing the exact 216-byte size
and the best score, though pointer registers and several branch forms differed.

### Attempt 5 notes

Used non-emitting fixed-register hints for the two inlined control pointers,
plus a memory barrier between looping and reverse checks. The compiler added
an extra `a2` alias, retained the wrong primary pointer registers, and emitted
212 bytes; this improved on the released-body attempts but not attempt 4.

## Outcome

Deferred after five source-level attempts. The best candidate recovered the exact size and animation-control layout, but equivalent pointer, branch, and floating-hazard scheduling remained different.
