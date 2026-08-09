#ifndef NGL_ATE_H
#define NGL_ATE_H

#include "NGL/PS2/ngl_ps2.h"

struct ATEFileEntry {
    nglFixedString name;
    unsigned int header_offset;
    unsigned int image_offset;
    unsigned int palette_offset;
    unsigned int padding;
};

ATEFileEntry *ATENthTextureEntryHead(
    char *ate_file,
    const nglFixedString &texture_name,
    int index);
nglFixedString &ATETextureName(
    char *ate_file,
    const nglFixedString &texture_name,
    int index);

#endif
