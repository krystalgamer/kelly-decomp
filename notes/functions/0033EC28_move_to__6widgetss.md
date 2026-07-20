# move_to__6widgetss

- Address: `0x0033EC28`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 83.3333 | `candidate.cpp` |
| 2 | different | 17.8571 | 7.1429 | `candidate.cpp` |
| 3 | different | 89.5833 | 58.3333 | `candidate.cpp` |
| 4 | different | 17.8571 | 7.1429 | `candidate.cpp` |
| 5 | different | 83.3333 | 83.3333 | `candidate.cpp` |

### Attempt 1 notes

The target-equivalent store order emitted the correct virtual call but moved
the x store ahead of the vtable load. Best initial byte score: 83.3333%.

### Attempt 2 notes

A read-write fixed-register constraint preserved order but forced explicit
short sign-extension and expanded the function to 56 bytes.

### Attempt 3 notes

A plain scheduling barrier recovered the target y-store/vtable-load/x-store
order and reached the best byte score, 89.5833%, but allocated the table in
`a2` instead of target `v0`.

### Attempt 4 notes

Binding the table to `v0` through an input constraint again forced short
sign-extension and expanded the function to 56 bytes.

### Attempt 5 notes

Making the vtable member volatile avoided asm constraints but reverted to the
original x-store-before-load schedule.

## Outcome

Five source schedules could not preserve both the target vtable-load/store order and vtable register allocation without extra short-extension instructions; best byte score was 89.5833%.
