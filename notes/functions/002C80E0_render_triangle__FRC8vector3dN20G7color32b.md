# render_triangle__FRC8vector3dN20G7color32b

- Address: `0x002C80E0`
- Size: `0x1A0` (416 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/debug_render.cpp`
- Reference source: `KS/SRC/debug_render.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave 73 A1
Target: 0x002C80E0 render_triangle__FRC8vector3dN20G7color32b
Released body: select three or six triangle indices, bind the blank diffuse material with forced translucency, reset local-to-world, fill three lit workspace vertices, and submit the indexed list.
Exactly one scratch candidate used the exact released PS2 body with minimal declarations.
Result: compile_failed, score 0.0%; the minimal material declaration omitted the released send_context default arguments, so the three-argument call did not compile.
No retry, variants, diff chasing, build, finalize, integration, tracked-file edits, commit, or push.

Citations:
- kelly-slaters-pro-surfer/KS/SRC/debug_render.cpp:217-291
- tmp/functions/002C80E0_render_triangle__FRC8vector3dN20G7color32b/attempt-1/result.json
- tmp/functions/002C80E0_render_triangle__FRC8vector3dN20G7color32b/attempt-1/compiler.stderr

## Outcome

The exact released debug triangle renderer failed to compile in the isolated bench; no source variant was attempted.
