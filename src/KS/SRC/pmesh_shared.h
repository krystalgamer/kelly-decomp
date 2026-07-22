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

    wedge_ref get_wedge_ref(int index) const { return wedge_refs[index]; }
    bool is_cosmetic() const { return flags & TERFACE_COSMETIC; }
    unsigned char get_surface_type() const
    {
        return (flags & TERFACE_SURFTYPE_MASK) >> 4;
    }
};

class reduced_face {
public:
    material_ref my_material;
    unsigned short level_of_detail;
    unsigned short flags;

    bool is_cosmetic() const { return flags & TERFACE_COSMETIC; }
    unsigned char get_surface_type() const
    {
        return (flags & TERFACE_SURFTYPE_MASK) >> 4;
    }
};

class vr_pmesh {
    char visual_rep_data[0x2C];
    face* faces;
    reduced_face* reduced_faces;
    int num_faces;
    char materials[0xC];
    void* vert_refs_for_wedge_ref;
    wedge_ref* wedge_index_list;

public:
    wedge_ref get_wedge_ref(face_ref faceid, int corner) const;
    unsigned char get_surface_type(face_ref faceid) const;
    bool is_cosmetic(face_ref faceid) const;
};

#endif
