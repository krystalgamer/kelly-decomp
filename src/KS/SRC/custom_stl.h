#ifndef CUSTOM_STL_H
#define CUSTOM_STL_H

// The released allocator is stateless. Its operational members are only
// needed by container functions that are reconstructed separately.
template<class T>
class my_allocator {
};

#endif
