# SetColor__9PanelQuadG5color

- Address: `0x001D9B00`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.1579 | 0.0 | `candidate.cpp` |
| 2 | different | 13.1579 | 0.0 | `candidate.cpp` |
| 3 | different | 52.7778 | 22.2222 | `candidate.cpp` |
| 4 | different | 77.7778 | 11.1111 | `candidate.cpp` |
| 5 | different | 55.5556 | 11.1111 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an emitted-symbol or aggregate-copy mismatch.

### Attempt 2 notes

Scalar field assignments inside the by-value method still triggered an ABI temporary copy before the body.

### Attempt 3 notes

The pointer-based alias removed the ABI copy but interleaved each load with its store instead of preloading all four components.

### Attempt 4 notes

Preloading all components still assigned them to a rotated FPU register order.

### Attempt 5 notes

Fixed FPU register bindings still did not reproduce the target alpha/red/green/blue load/store schedule; the five-attempt limit is exhausted.

## Outcome

Five source shapes could not reproduce the target alpha/red/green/blue FPU load/store schedule; best byte score was 77.7778%.
