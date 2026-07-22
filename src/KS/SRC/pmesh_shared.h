#ifndef KELLY_DECOMP_PMESH_SHARED_H
#define KELLY_DECOMP_PMESH_SHARED_H

typedef unsigned int face_ref;
typedef unsigned short wedge_ref;
typedef short material_ref;

enum {
    TERFACE_SURFTYPE_MASK = 0x0070,
    TERFACE_COSMETIC = 0x0400,
};

class face {
public:
    wedge_ref wedge_refs[3];
    material_ref my_material;
    unsigned short level_of_detail;
    unsigned short flags;

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

class vr_pmesh {
    char visual_rep_data[0x18];
    hw_rasta_vert *xverts;
    char fields_before_num_wedges[0xC];
    int num_wedges;
    face* faces;
    reduced_face* reduced_faces;
    int num_faces;
    material_vector materials;
    void* vert_refs_for_wedge_ref;
    wedge_ref* wedge_index_list;

public:
    inline int get_num_wedges() const { return num_wedges; }
    void mark_self_lit_verts();
    wedge_ref get_wedge_ref(face_ref faceid, int corner) const;
    unsigned char get_surface_type(face_ref faceid) const;
    bool is_cosmetic(face_ref faceid) const;
};

#endif
