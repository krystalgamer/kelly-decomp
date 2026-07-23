# getAnalogState__Fi

- Address: `0x00159058`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 51.1905 | 42.8571 | `candidate.cpp` |
| 2 | different | 54.7619 | 42.8571 | `candidate.cpp` |
| 3 | different | 48.8095 | 38.0952 | `candidate.cpp` |
| 4 | different | 61.9048 | 52.381 | `candidate.cpp` |
| 5 | different | 54.7619 | 42.8571 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released getAnalogState body and reconstructed input_mgr singleton/method declaration. The device parameter was initially typed as int and the compiler emitted an 80-byte comparison layout.

### Attempt 2 notes

Restored the released device_id_t parameter and ANY_LOCAL_JOYSTICK value, fixing the helper call target. The floating comparison control flow remained 80 bytes.

### Attempt 3 notes

Introduced an explicit result variable and matching barrier around the released comparisons. The compiler retained an 80-byte non-target branch layout.

### Attempt 4 notes

Initialized the result to zero and assigned 1/-1 in the released branches. This reached 84 bytes but used different floating branches and delay-slot assignments.

### Attempt 5 notes

Used an uninitialized result with explicit positive, negative, and zero assignments. The compiler returned to the 80-byte comparison layout.

## Outcome

Released getAnalogState did not reproduce the target floating comparison branch schedule after five source-level forms.
