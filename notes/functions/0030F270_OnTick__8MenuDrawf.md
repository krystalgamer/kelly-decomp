# OnTick__8MenuDrawf

- Address: `0x0030F270`
- Size: `0xD8` (216 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Used the released `MenuDraw::OnTick` body verbatim, with
`MENUDRAW_TypeMax` resolved to the two entries from `menudrawmisc.txt`.
Declared the real `Menu` virtual-method order and the three derived menu
types so the old GCC ABI emits the released adjusted virtual dispatch
through the vtable entry at offsets `0x18/0x1c`.

The existing matched water and particle tick functions established the
function-pointer loop form and the repository's compensated absolute-equate
convention.

Result: exact match, 216/216 bytes and 54/54 instructions (100%).
Testing stopped after this first exact candidate.

## Outcome

Matched the exact released draw-menu tick using consolidated source-faithful menu declarations and the two-entry draw setter table.
