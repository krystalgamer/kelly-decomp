# dump_threads__CQ213script_object8instanceP7os_file

- Address: `0x00350AF8`
- Size: `0xB8` (184 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released profiling-enabled body matches exactly with source-faithful
script object, list iterator, VM thread, executable, and string layouts in
the subsystem shared header.

## Outcome

Released profiling-enabled thread traversal and report formatting reproduce the target exactly.
