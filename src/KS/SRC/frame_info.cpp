// frame_info method definitions extracted by generated one-function shims.

#include "KS/SRC/frame_info.h"

// 0x00338638 __10frame_info
frame_info::frame_info()
{
    age = 0.0f;
    ifl_frame_boost = 0;
    ifl_frame_locked = -1;
}

// 0x00338650 get_ifl_frame_locked__C10frame_info
int frame_info::get_ifl_frame_locked() const
{
    return ifl_frame_locked;
}

// 0x00338658 set_ifl_frame_locked__10frame_infoi
void frame_info::set_ifl_frame_locked(int value)
{
    ifl_frame_locked = value;
}

// 0x00338660 get_age__C10frame_info
float frame_info::get_age() const
{
    return age;
}

// 0x00338678 __as__10frame_infoRC10frame_info
void frame_info::operator=(const frame_info &source)
{
    ifl_frame_locked = source.ifl_frame_locked;
    ifl_frame_boost = source.ifl_frame_boost;
    ifl_frame_rate = ifl_frame_rate;
    age = source.age;
}

// 0x003386A0 time_to_frame_locked__C10frame_infoi
int frame_info::time_to_frame_locked(int period) const
{
    if (period == 1)
        return 0;
    else if (ifl_frame_locked >= 0)
        return ifl_frame_locked;
    else
        return time_to_frame(period);
}

// 0x003386D8 time_to_frame__C10frame_infoi
int frame_info::time_to_frame(int period) const
{
    if (period == 1)
        return 0;
    else
    {
        int index = (int)(age * ifl_frame_rate) + ifl_frame_boost;
        if (period == 0)
            return index;
        else
            return index % period;
    }
}

// 0x00338728 compute_boost_for_play__10frame_infoi
void frame_info::compute_boost_for_play(int period)
{
    if (ifl_frame_locked >= 0)
    {
        ifl_frame_boost =
            ifl_frame_locked -
            ((int)(age * ifl_frame_rate) % period);
        if (ifl_frame_boost < 0)
            ifl_frame_boost += period;
        ifl_frame_locked = -1;
    }
}
