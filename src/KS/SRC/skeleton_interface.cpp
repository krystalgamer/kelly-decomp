// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00126CE0)
// 0x00126CE0 connect_bone_abs_po__18skeleton_interfaceRCiP4bone
struct po {
    char data[0x40];
};

class bone {
    char padding0[0x50];
    po *my_abs_po;
    po *my_handed_abs_po;
    char padding1[0x0C];
    bool is_part_of_skeleton;

public:
    void set_part_of_skeleton(bool value) {
        is_part_of_skeleton = value;
    }

    friend class skeleton_interface;
};

class skeleton_interface {
    char padding[8];
    po *abs_po;
    po *h_abs_po;

public:
    void connect_bone_abs_po(const int &bone_idx, bone *new_bone);
};

void skeleton_interface::connect_bone_abs_po(
    const int &bone_idx,
    bone *new_bone
) {
    new_bone->my_abs_po = &abs_po[bone_idx];
    new_bone->my_handed_abs_po = &h_abs_po[bone_idx];
    new_bone->set_part_of_skeleton(true);
}
#endif
