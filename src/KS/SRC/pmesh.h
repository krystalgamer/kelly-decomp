#ifndef PMESH_H
#define PMESH_H

#pragma interface

#include "KS/SRC/visrep.h"

typedef unsigned int face_ref;
typedef unsigned short wedge_ref;
typedef short material_ref;

enum {
    UNINITIALIZED_MATERIAL_REF = -1,
    UNINITIALIZED_WEDGE_REF = 0xffff,
    TERFACE_SURFTYPE_MASK = 0x0070,
    TERFACE_COSMETIC = 0x0400,
};

class face {
public:
    wedge_ref wedge_refs[3];
    material_ref my_material;
    unsigned short level_of_detail;
    unsigned short flags;

    face(const face &other)
    {
        wedge_refs[0] = other.wedge_refs[0];
        wedge_refs[1] = other.wedge_refs[1];
        wedge_refs[2] = other.wedge_refs[2];
        my_material = other.my_material;
        level_of_detail = other.level_of_detail;
        flags = other.flags;
    }

    inline wedge_ref get_wedge_ref(int index) const { return wedge_refs[index]; }
    inline bool is_cosmetic() const { return flags & TERFACE_COSMETIC; }
    inline unsigned char get_surface_type() const
    {
        return (flags & TERFACE_SURFTYPE_MASK) >> 4;
    }
};

class reduced_face {
public:
    material_ref my_material;
    unsigned short level_of_detail;
    unsigned short flags;

    reduced_face()
        : my_material(UNINITIALIZED_MATERIAL_REF),
          level_of_detail(0xffff),
          flags(0)
    {
    }

    inline bool is_cosmetic() const { return flags & TERFACE_COSMETIC; }
    inline unsigned char get_surface_type() const
    {
        return (flags & TERFACE_SURFTYPE_MASK) >> 4;
    }
};

class hw_rasta_vert {
    char fields_before_clip_flags[12];

public:
    unsigned char clip_flags;
    char remaining_fields[47];
};

class material_vector {
    void **first;
    void **last;
    void **capacity_end;

public:
    inline bool empty() const { return first == last; }
};

struct pmesh_map_node {
    int color;
    pmesh_map_node *parent;
    pmesh_map_node *left;
    pmesh_map_node *right;
};

class material_map {
    pmesh_map_node *header;
    unsigned int node_count;
};

class vr_pmesh : public visual_rep {
    void *verts;
    hw_rasta_vert *xverts;
    void *wedges;
    int min_faces;
    int *xverts_for_lod;
    int num_wedges;
    face* faces;
    reduced_face* reduced_faces;
    int num_faces;
    material_vector materials;
    void* vert_refs_for_wedge_ref;
    wedge_ref* wedge_index_list;
    short *wedge_lod_starts;
    face_ref *original_face_for_face_slot;
    material_map material_changes;

public:
    virtual void render_instance(
        unsigned int flavor,
        instance_render_info *info,
        short *bones);
    virtual int get_min_faces(time_value_t = 0) const;
    virtual int get_max_faces(time_value_t = 0) const;
    inline int get_num_wedges() const { return num_wedges; }
    void shrink_memory_footprint();
    void optimize();
    void mark_self_lit_verts();
    wedge_ref get_wedge_ref(face_ref faceid, int corner) const;
    unsigned char get_surface_type(face_ref faceid) const;
    bool is_cosmetic(face_ref faceid) const;
};

#endif
