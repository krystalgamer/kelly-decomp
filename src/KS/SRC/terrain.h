#ifndef TERRAIN_H
#define TERRAIN_H

#include "KS/SRC/bp_tree.h"
#include "KS/SRC/hyperplane.h"
#include "KS/SRC/path.h"

class tree_t;

class sector {
    region_node *my_region;

public:
    sector() : my_region(0) {}
    explicit sector(region_node *node) : my_region(node) {}
    region_node *get_region() const {
        return my_region;
    }
};

class partition3 : public hyperplane<vector3d> {
    typedef hyperplane<vector3d> _H;

public:
    class faceref {
        unsigned short region_idx;
        unsigned short face_idx;

    public:
        faceref()
          : region_idx((unsigned short)-1)
        {
        }
        faceref(unsigned short region, unsigned short face)
          : region_idx(region),
            face_idx(face)
        {
        }
        inline bool valid() const {
            return region_idx != (unsigned short)-1;
        }
        inline unsigned short get_face_ref() const {
            return face_idx;
        }
    };

private:
    sector *my_sector;

public:
    partition3();
    partition3(const partition3 &other);
    sector *get_sector() const { return my_sector; }
};

class tree_t : public bp_tree<partition3, vector3d> {
public:
    sector *find_sector(const vector3d &position) const;
};

extern "C" bool tree_recurse_intersection(
    tree_t *tree,
    tree_t::branch branch_value,
    const vector3d &start,
    const vector3d &end,
    const vector3d &surface_normal,
    vector3d &intersection,
    vector3d &normal
) __asm__(
    "recurse_intersection__t7bp_tree2Z10partition3Z8vector3d"
    "GQ2t7bp_tree2Z10partition3Z8vector3d6branchRC8vector3d"
    "N22R8vector3dT5");

__asm__(
    ".equ recurse_intersection__t7bp_tree2Z10partition3Z8vector3d"
    "GQ2t7bp_tree2Z10partition3Z8vector3d6branchRC8vector3d"
    "N22R8vector3dT5, 0x003008E8");

class terrain {
    char data_before_tree[0x34];
    tree_t *tree;

public:
    sector *find_sector(const vector3d &position) const;
    bool find_intersection(
        const vector3d &start,
        const vector3d &end,
        vector3d &hit,
        vector3d &normal);
    void optimize();
};

#endif
