# __tf8polytube

- Address: `0x00146370`
- Size: `0xB4` (180 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/polytube.h`
- Reference source: `KS/SRC/polytube.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 17.7778 | 2.2222 | `candidate.cpp` |
| 3 | different | 21.8085 | 8.5106 | `candidate.cpp` |
| 4 | different | 16.3265 | 4.0816 | `candidate.cpp` |
| 5 | different | 13.5 | 2.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released `polytube : public entity : public bone : public signaller` hierarchy and established nested single-inheritance RTTI pattern initially exposed duplicate legacy render-flavor declarations in shared polytube context.

### Attempt 2 notes

After consolidating shared render flags, the source-faithful nested RTTI calls compiled but used three different callee-saved registers and omitted the original high-address copy instructions.

### Attempt 3 notes

Binding the hierarchy records to target registers caused the compiler to rematerialize RTTI addresses around each call and produced a shorter two-register frame.

### Attempt 4 notes

Constraining all four released hierarchy records retained an extra full polytube pointer and enlarged the frame.

### Attempt 5 notes

Using only the released high-address records for the final base and return arguments still produced additional materializations. The exact inheritance and shared RTTI pattern were preserved without recreating class definitions locally.

## Outcome

Deferred polytube RTTI after five source-level attempts; the exact released inheritance and nested shared RTTI initialization could not reproduce original register materialization.
