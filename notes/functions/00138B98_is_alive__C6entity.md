# is_alive__C6entity

- Address: `0x00138B98`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The BIGCULL build replaces damage-interface checks with a constant `true`.
The constant predicate matched on the first attempt.

## Outcome

The BIGCULL build replaces damage-interface liveness checks with a constant true result. It matched on the first candidate and retained the exact integrated ROM checksum.
