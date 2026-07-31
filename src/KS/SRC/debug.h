#ifndef DEBUG_H
#define DEBUG_H

class stringx;
class vector2di;
class vector3d;

void debug_print(const char *format, ...);
void debug_print(const stringx &text);
void debug_print(
    const vector2di &position,
    const stringx &text);
void debug_print(
    vector3d position,
    const stringx &text);

#endif
