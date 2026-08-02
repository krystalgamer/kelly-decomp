#include "KS/SRC/app.h"

// 0x0030C8D8 get_viri__3app
instance_render_info *app::get_viri()
{
    return viri;
}

// 0x0030C8E0 set_viri__3appP20instance_render_info
void app::set_viri(instance_render_info *value)
{
    viri = value;
}
