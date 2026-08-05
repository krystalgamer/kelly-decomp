// trail definitions extracted by generated one-function shims.

// 0x00361950 ks_fx_trail_create__FffbP22kellyslater_controller
#include "KS/SRC/ks/trail.h"

trail *ks_fx_trail_create(
    float sample_rate,
    float life,
    bool extra,
    kellyslater_controller *owner)
{
    if (owner)
    {
        if (!trail_p1->is_valid())
        {
            trail_p1->initialize(sample_rate, life, extra, owner);
            return trail_p1;
        }
        if (!trail_p2->is_valid())
        {
            trail_p2->initialize(sample_rate, life, extra, owner);
            return trail_p2;
        }
        nglPrintf(no_player_trail_text);
        return 0;
    }
    if (!trail_m1->is_valid())
    {
        trail_m1->initialize(sample_rate, life, extra, owner);
        return trail_m1;
    }
    if (trail_m2->is_valid())
    {
        nglPrintf(no_object_trail_text);
        return 0;
    }
    trail_m2->initialize(sample_rate, life, extra, owner);
    return trail_m2;
}

// 0x00361A40 ks_fx_trail_draw__Fi
#include "KS/SRC/ks/trail.h"

void ks_fx_trail_draw(const int heroIdx)
{
    for (int j = 0; j < MAX_TRAIL_GENERATORS; j++)
    {
        if (g_game_ptr->get_num_active_players() == 2)
        {
            if (heroIdx == 0 && j == 1)
                continue;
            if (heroIdx == 1 && j == 0)
                continue;
        }

        if (g_trails[j]->is_valid())
            g_trails[j]->draw();
    }
}


// 0x00361DA0 destroy__5trail
#include "KS/SRC/ks/trail.h"

void trail::destroy() {
    if (valid)
        valid = false;
}

// 0x003643E8 create_big_landing_splash__5trail
#include "KS/SRC/ks/trail.h"

extern float extra_splash_power_amount;
__asm__(".equ extra_splash_power_amount, 0x0047ED84");

void trail::create_big_landing_splash()
{
    if (my_spray) {
        my_spray->extra_splash_power[0] =
            my_spray->extra_splash_power[1] =
                extra_splash_power_amount;
    }
}

// 0x00364410 create_face_trick_splash__5trailb
extern float extra_splash_power_amount;
__asm__(".equ extra_splash_power_amount, 0x0047ED84");
struct spray {
    char padding[0xCA8];
    float extra_splash_power[2];
};
class trail {
    char padding[0xCD78];
    spray *my_spray;
public:
    void create_face_trick_splash(bool left);
};
void trail::create_face_trick_splash(bool left)
{
    if (left)
        my_spray->extra_splash_power[0] = extra_splash_power_amount;
    else
        my_spray->extra_splash_power[1] = extra_splash_power_amount;
}

// 0x00361BA0 _$_5trail
extern "C" void arch_free(void *) __asm__("arch_free__FPv");
extern "C" void destroy_trail_body(void *) __asm__("destroy__5trail");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char trail_vtable[];
__asm__(".equ arch_free__FPv,0x002AC768");
__asm__(".equ destroy__5trail,0x00361DA0");
__asm__(".equ __builtin_delete,0x002AC6B0");
__asm__(".equ trail_vtable,0x0051A7F0");
struct trail_layout { char data[1]; };
extern "C" void destroy_trail(trail_layout *self, int deleting) __asm__("_$_5trail");
void destroy_trail(trail_layout *self, int deleting)
{
    char *far = (char *)self + 0x8000;
    *(const void **)(far + 0x4d7c) = trail_vtable;
    arch_free(*(void **)(far + 0x4d78));
    destroy_trail_body(self);
    if (deleting & 1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}

// 0x003644F0 spraypt_update__5trailP15spray_control_tUi
#include "KS/SRC/ks/trail.h"
#include "KS/SRC/timer.h"

void trail::spraypt_update (spray_control_t *SprayControlPts, u_int max)
{
	register trail *self __asm__("$19") = this;
	register u_int i __asm__("$17") = 0;
	register u_int limit __asm__("$18") = max;
	register spray_control_t *current __asm__("$16");

	if (limit)
	{
		current = SprayControlPts;
		do
		{
			current->age += (float)TIMER_GetFrameSec();

			if((current->age > current->life) || !current->valid || !current->trail_node->valid)
				current->valid = 0;
			else
				self->spraypt_pos(current);

			i++;
			current++;
		} while (i < limit);
	}
}

// 0x00361DB8 reset__5trail
#include "KS/SRC/ks/trail.h"

void trail::reset()
{
    my_index = 0;
    my_last_sample = 0;
    my_lastmag1 = 0;
    my_lastmag2 = 0;

    u_int i = 0;
    if (my_total_nodes)
    {
        trail_node_t *node = my_trail_data;
        do
        {
            node->valid = false;
            i++;
        } while (i < my_total_nodes && (node++, true));
    }

    if (my_spray)
    {
        my_spray->last_apow = 0;
        my_spray->last_bpow = 0;
        my_spray->num_control_points_a = 0;
        my_spray->num_control_points_b = 0;
        my_spray->floater_interval = 0;
        my_spray->airdrops_interval = 0;
        my_spray->left_hand_interval = 0;
        my_spray->right_hand_interval = 0;
        my_spray->extra_splash_power[0] = 0;
        my_spray->extra_splash_power[1] = 0;

        for (int i = 0; i < MAX_SPRAY_PTS; i++)
        {
            my_spray->control_points_a[i].valid = false;
            my_spray->control_points_b[i].valid = false;
        }
    }
}
