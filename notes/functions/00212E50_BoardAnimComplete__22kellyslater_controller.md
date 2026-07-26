# BoardAnimComplete__22kellyslater_controller

- Address: `0x00212E50`
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
| 3 | different | 45.3704 | 22.2222 | `candidate.cpp` |
| 4 | different | 61.1111 | 40.7407 | `candidate.cpp` |
| 5 | different | 43.0556 | 22.2222 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released function body with faithful scalar aliases,
animation flags, inline `anim_control_t` predicates, the control block at
`entity_anim_tree+0x48`, `my_board_model` at controller offset `0xE4C`, and the
real `entity::get_anim_tree` equate. It compiled to 204 bytes versus 216.
The compiler retained the first flags load and chose different pointer and
floating-point load scheduling, scoring 44.9074% (22.2222% instructions).

### Attempt 2 notes

Attempt 2 kept the exact released body and added the polymorphic
`entity_anim`/`entity_anim_tree` inheritance shape from the released headers,
while preserving the control offset. The emitted function was byte-identical
to attempt 1 (204 bytes, 44.9074% bytes, 22.2222% instructions), showing that
the missing full inheritance shape was not responsible for register allocation.

### Attempt 3 notes

Attempt 3 tested a source-level context variant with volatile animation flags
and the non-reverse comparison written in target operand order. It emitted 196
bytes and scored 45.3704% (22.2222% instructions). The compiler still retained
the flags value and additionally merged the reverse/non-reverse FP paths, so
this was worse than the exact released expression.

### Attempt 4 notes

Attempt 4 used non-instruction-emitting compiler barriers around the inline
control-field reads while retaining released semantics. It reached the exact
216-byte target size and improved to 61.1111% bytes / 40.7407% instructions.
The barriers forced the desired reloads and FP spacing, but explicit local
temporaries changed branch-likely selection and result register flow.

### Attempt 5 notes

Attempt 5 restored the released inline helper expressions and placed a
non-instruction-emitting memory barrier only in `is_flagged` to encourage the
target's repeated flags loads. It emitted 208 bytes and scored 43.0556% bytes /
22.2222% instructions. This did not reproduce the target register allocation;
attempt 4 remains best at 61.1111%.

## Outcome

Deferred after five source-level attempts. The source-faithful board animation completion reached the exact target size, but register allocation, branch forms, and floating-hazard scheduling remained different.
