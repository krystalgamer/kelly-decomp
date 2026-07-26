# __cl__35slf_wait_set_global_time_dilation_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00322F48`
- Size: `0xE4` (228 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.7544 | 10.5263 | `candidate.cpp` |
| 2 | different | 25.4386 | 8.7719 | `candidate.cpp` |
| 3 | different | 28.5088 | 10.5263 | `candidate.cpp` |
| 4 | different | 30.1724 | 13.7931 | `candidate.cpp` |
| 5 | different | 31.1404 | 14.0351 | `candidate.cpp` |

### Attempt 1 notes

Compiled the exact released SLF_SDATA/SLF_PARMS body with faithful stack, parameter/local data, world script-time offset, min-by-reference, and global dilation context. The arithmetic and layouts matched, but EE GCC omitted one pre-compare FPU hazard nop and inverted the final done/recall branch/result placement, producing 224 bytes instead of 228.

### Attempt 2 notes

Made done/recall results explicit with gotos, but the top-level first-entry goto reversed the major block order: recall code emitted first and first-entry initialization moved to the tail. This obscured the otherwise correct arithmetic and did not address the FPU hazard nop.

### Attempt 3 notes

Restored the released first-entry-first block order and made recall completion explicit. Function size became exact and the final branch direction matched, but the zero-duration setup reordered `mtc1` before the duration load, stored integer zero into the clock, and recall used `$v1` for the result plus `$v0` for the global base instead of the target pairing.

### Attempt 4 notes

Pinned the zero/duration FPU values and recall global/result registers. The first-entry block retained exact size but still lacked the pre-compare hazard nop, while rewriting through the fixed global pointer changed the floating arithmetic and produced an extra boolean normalization instruction.

### Attempt 5 notes

Returned to the exact released block order and arithmetic, changing only the recall result to an explicit `$v0` true/false path. This restored the target global base, floating register schedule, branch direction, and exact 228-byte size. The compiler still omitted the target's single pre-compare FPU hazard nop, shifting the body, and appended a boolean normalization instruction before return.

## Outcome

Deferred after five source-level attempts. The released global-time-dilation wait logic, stack layout, script time source, interpolation, and exact-sized control flow are recovered, but one FPU hazard nop and final boolean normalization differ.
