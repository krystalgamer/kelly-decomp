// Matching decompilation blocks selected by generated build shims.


// 0x00105570 pop_disable__12ai_interface
#include "KS/SRC/ai_interface.h"

void ai_interface::pop_disable() {
    --disable_count;
    if (disable_count < 0)
        disable_count = 0;
}

// 0x00105A18 render__12ai_interfacec
#include "KS/SRC/ai_interface.h"

void ai_interface::render(char level) {
}

// 0x00105E00 get_ifc_str__12ai_interfaceRC7pstringR7stringx
#include "KS/SRC/ai_interface.h"

bool ai_interface::get_ifc_str(
    const pstring &attribute,
    stringx &value) {
    return false;
}

// 0x00105E08 set_ifc_str__12ai_interfaceRC7pstringRC7stringx
#include "KS/SRC/ai_interface.h"

bool ai_interface::set_ifc_str(
    const pstring &attribute,
    const stringx &value) {
    return false;
}

// 0x001058A0 set_current_path_graph__12ai_interfaceP10path_graph
#include "KS/SRC/ai_interface.h"
#include "KS/SRC/ai_locomotion.h"

asm(".equ clear_path__13ai_locomotion, 0x00107FD8");

void ai_interface::set_current_path_graph(path_graph *graph)
{
    if (locomotion)
        locomotion->set_current_path_graph(graph);
}
// Matching decompilation blocks selected by generated build shims.

// 0x00105528 push_disable__12ai_interface
#include "KS/SRC/ai_interface.h"
#include "KS/SRC/entity.h"

__asm__(".equ goto_position__12ai_interfaceRC8vector3dfbbb, 0x00105688");
extern "C" void goto_ai_position(
    ai_interface *self,
    const vector3d &position,
    float radius,
    bool running,
    bool path_find,
    bool force_finish
) __asm__("goto_position__12ai_interfaceRC8vector3dfbbb");

void ai_interface::push_disable()
{
    ++disable_count;
    void (*go_to)(
        ai_interface *,
        const vector3d &,
        float,
        bool,
        bool,
        bool) = goto_ai_position;
    go_to(
        this,
        my_entity->get_abs_position(),
        25.0f,
        true,
        false,
        true);
}
