#ifndef KELLY_DECOMP_ENTITY_ANIM_CLEAR_SHARED_H
#define KELLY_DECOMP_ENTITY_ANIM_CLEAR_SHARED_H

class entity_anim_tree {
    unsigned short flags;

public:
    enum anim_flags_t {
        ANIM_VALID = 0x1000
    };

    inline bool is_flagged(anim_flags_t flag) const {
        return flags & flag;
    }
    inline bool is_valid() const {
        return is_flagged(ANIM_VALID);
    }
    void deconstruct();
    void detach();
    void attach();
};

class entity {
public:
    entity_anim_tree *get_anim_tree(int slot) const;
    void clear_anim(entity_anim_tree *animation);
};

__asm__(".equ get_anim_tree__C6entityi, 0x001348D8");
__asm__(".equ deconstruct__16entity_anim_tree, 0x00117670");
__asm__(".equ detach__16entity_anim_tree, 0x00117640");
__asm__(".equ attach__16entity_anim_tree, 0x00117538");

#endif
