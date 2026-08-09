#ifndef HW_TEXTURE_REF_H
#define HW_TEXTURE_REF_H

#include "KS/SRC/refptr.h"

class hw_texture : public ref {
};

typedef refptr<hw_texture> texture_refptr;

#endif
