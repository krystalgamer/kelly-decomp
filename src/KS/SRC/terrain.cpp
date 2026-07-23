// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002E81C8)
// 0x002E81C8 __10partition3
class partition3 {
    char padding[0x10];
    void* my_sector;
public:
    partition3();
};

partition3::partition3() {
    my_sector = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EC610)
// 0x002EC610 find_sector__C7terrainRC8vector3d
class vector3d;
class sector;
class tree_t { public: sector *find_sector(const vector3d &position) const; };
__asm__(".equ find_sector__C6tree_tRC8vector3d, 0x002E83D0");
class terrain { char padding[0x34]; tree_t *tree; public: sector *find_sector(const vector3d &position) const; };
sector *terrain::find_sector(const vector3d &position) const { sector *result = tree->find_sector(position); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E81D8)
// 0x002E81D8 __10partition3RC10partition3
struct vector3d {
    float x, y, z;
    vector3d(const vector3d& b) : x(b.x), y(b.y), z(b.z) {}
};
template <class spacial_t>
class hyperplane {
protected:
    float d;
    spacial_t normal;
public:
    hyperplane(const hyperplane& b) : normal(b.normal) { d = b.d; }
};
class sector;
class partition3 : public hyperplane<vector3d> {
    typedef hyperplane<vector3d> _H;
    sector* my_sector;
public:
    partition3(const partition3& b);
};
partition3::partition3(const partition3& b) : _H(b), my_sector(b.my_sector) {}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E8DD8)
// 0x002E8DD8 find_intersection__7terrainRC8vector3dT1R8vector3dT3
struct vector3d
{
    float x;
    float y;
    float z;
};

struct tree_iterator
{
    char empty_base[4];
    void *node;

    tree_iterator(void *value) : node(value) {}
    tree_iterator(const tree_iterator &other) : node(other.node) {}
};

struct tree_branch
{
    tree_iterator parent;
    int child;

    tree_branch(const tree_iterator &value)
        : parent(value), child(2)
    {
    }
    tree_branch(const tree_branch &other)
        : parent(other.parent), child(other.child)
    {
    }
};

struct tree_layout
{
    char padding[0x10];
    void *root;

    tree_iterator begin() { return tree_iterator(root); }
};

extern "C" bool recurse_intersection(
    tree_layout *tree,
    tree_branch branch,
    const vector3d &p0,
    const vector3d &p1,
    const vector3d &my_normal,
    vector3d &intersection,
    vector3d &normal
) __asm__(
    "recurse_intersection__t7bp_tree2Z10partition3Z8vector3d"
    "GQ2t7bp_tree2Z10partition3Z8vector3d6branchRC8vector3d"
    "N22R8vector3dT5"
);

__asm__(
    ".equ recurse_intersection__t7bp_tree2Z10partition3Z8vector3d"
    "GQ2t7bp_tree2Z10partition3Z8vector3d6branchRC8vector3d"
    "N22R8vector3dT5, 0x003008E8"
);

class terrain
{
    char padding[0x34];
    tree_layout *tree;

public:
    bool find_intersection(
        const vector3d &p0, const vector3d &p1,
        vector3d &intersection, vector3d &normal
    );
};

bool terrain::find_intersection(
    const vector3d &p0, const vector3d &p1,
    vector3d &intersection, vector3d &normal
)
{
    vector3d my_normal;
    return recurse_intersection(
        tree, tree_branch(tree->begin()), p0, p1,
        my_normal, intersection, normal
    );
}
#endif
