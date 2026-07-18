# get_class_name__Ct17bounded_attribute1Zi

- Address: `0x003141B8`
- Size: `0xC` (12 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/attribute_template.h`
- Reference source: `KS/SRC/attribute_template.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released `bounded_attribute<int>` accessor returns its static `type_name` through a local absolute equate.

## Outcome

The released `bounded_attribute<int>::get_class_name` constant reference matched exactly on the first attempt.
