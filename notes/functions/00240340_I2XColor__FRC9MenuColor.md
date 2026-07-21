# I2XColor__FRC9MenuColor

- Address: `0x00240340`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menungl.cpp`
- Reference source: `KS/SRC/ks/menungl.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `show_menuentry_candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `i2xcolor_candidate.cpp` |
| 3 | different | 2.9412 | 0.0 | `i2xcolor_candidate.cpp` |
| 4 | different | 67.6471 | 29.4118 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

An unrelated `MenuEntry::Show()` candidate was submitted and did not emit the requested `I2XColor(const MenuColor&)` symbol.

### Attempt 2 notes

Treating `MenuColor` as an `int` produced the wrong mangled parameter type, `I2XColor(const int&)`, so the requested symbol was absent.

### Attempt 3 notes

Using a one-word `MenuColor` recovered the requested symbol but only loaded and returned that word. The released structure instead contains four byte channels.

### Attempt 4 notes

Recovered the released `unsigned int` return type, four `unsigned char` channel layout, and PS2 alpha scaling. The combined expression had the correct 68-byte shape but was reassociated, changing load order and register allocation.

### Attempt 5 notes

Preserved the released expression's left-to-right additions as sequential accumulation. This retained the released conversion and matched all 68 bytes and 17 instructions exactly.

## Outcome

Recovered the released four-byte MenuColor layout and unsigned packed PS2 color conversion. Preserving its left-to-right channel accumulation produced an exact 68-byte match and a byte-identical integrated ROM.
