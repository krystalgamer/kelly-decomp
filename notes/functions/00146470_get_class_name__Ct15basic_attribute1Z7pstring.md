# get_class_name__Ct15basic_attribute1Z7pstring

- Address: `0x00146470`
- Size: `0xC` (12 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/attribute_template.h`
- Reference source: `KS/SRC/attribute_template.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released `basic_attribute<pstring>` accessor returns its static `type_name` object at `0x005A2648`.

## Outcome

The released `basic_attribute<pstring>::get_class_name` constant reference matched exactly on the first attempt.
